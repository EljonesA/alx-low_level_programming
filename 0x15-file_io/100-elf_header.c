#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void printEntryPoint(char *ptr);
void printFileType(char *ptr);
void printOsabi(char *ptr);
void printVersion(char *ptr);
void printDataEncoding(char *ptr);
void printMagic(char *ptr);
void checkSystem(char *ptr);
int isElfFile(char *ptr);

/**
 * printEntryPoint - entry point
 * @ptr: pointer
 * Return: void.
 */
void printEntryPoint(char *ptr)
{
	int i;

	printf(" Entry point address:          Ox");
	for (i = 26; i >= 22; i--)
	{
		if (ptr[i] >= 0)
			printf("%02x", ptr[i]);
		else
			printf("%02x", 256 + ptr[i]);
	}
	if (ptr[7] == 6)
		printf("00");
	printf("\n");
}

/**
 * printFileType - get file info
 * @ptr: pointer
 * Return: void.
 */
void printFileType(char *ptr)
{
	char type = (ptr[5] == 1) ? ptr[16] : ptr[17];

	printf(" Type:                               ");
	switch (type)
	{
		case ET_NONE:
			printf("None (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);
			break;
	}
}

/**
 * printOsabi - get osabi
 * @ptr: pointer
 * Return: void.
 */
void printOsabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                                         ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %x\n", osabi);
			break;
	}
	printf("  ABI Version:                               %d\n", ptr[8]);
}

/**
 * printVersion - get version
 * @ptr: pointer
 * Return: void.
 */
void printVersion(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                                    %d", version);
	if (version == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}

/**
 * printDataEncoding - data encoding
 * @ptr: pointer
 * Return: void.
 */
void printDataEncoding(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                                     ");
	switch (data)
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", data);
			break;
	}
}

/**
 * printMagic - get magic ):
 * @ptr: pointer
 * Return: void
 */
void printMagic(char *ptr)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < 16; i++)
		printf("%02x ", ptr[i]);
	printf("\n");
}

/**
 * checkSystem - checks system
 * @ptr: pointer
 * Return: void.
 */
void checkSystem(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
		exit(98);
	printf("ELF Header:\n");
	printMagic(ptr);
	printf("  Class:                      ELF%d\n", (sys == '1') ? 32 : 64);
	printDataEncoding(ptr);
	printVersion(ptr);
	printOsabi(ptr);
	printFileType(ptr);
	printEntryPoint(ptr);
}

/**
 * isElfFile - is elf
 * @ptr: pointer
 * Return: 1(fail), 0(success).
 */
int isElfFile(char *ptr)
{
	if (ptr[0] != 0x7F || ptr[1] != 'E' || ptr[2] != 'L' || ptr[3] != 'F')
		return (0);
	return (1);
}

/**
 * main - entry point
 * @argc: args count
 * @argv: command line arguments array
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd;
	char ptr[27];
	ssize_t ret_read;

	if (argc != 2)
	{
		printf("Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Failed to open file\n");
		return (1);
	}

	ret_read = read(fd, ptr, 27);
	if (ret_read == -1)
	{
		printf("Error: Failed to read file\n");
		close(fd);
		return (1);
	}

	if (!isElfFile(ptr))
	{
		printf("Error: It is not an ELF file\n");
		close(fd);
		return (1);
	}

	checkSystem(ptr);
	close(fd);

	return (0);
}
