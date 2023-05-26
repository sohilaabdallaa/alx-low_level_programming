#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void print_error(const char *message) {
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_elf_header(const char *filename) {
	int fd = open(filename, O_RDONLY);
	if (fd == -1) {
		print_error("Failed to open the file");
	}

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1) {
		print_error("Failed to read the ELF header");
	}

	if (bytes_read < sizeof(Elf64_Ehdr)) {
		print_error("Invalid ELF header");
	}

	// Check if the file is an ELF file
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		print_error("Not an ELF file");
	}

	// Print the ELF header information
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS]) {
		case ELFCLASSNONE: printf("none\n"); break;
		case ELFCLASS32: printf("ELF32\n"); break;
		case ELFCLASS64: printf("ELF64\n"); break;
		default: printf("<unknown>\n"); break;
	}

	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA]) {
		case ELFDATANONE: printf("none\n"); break;
		case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
		case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
		default: printf("<unknown>\n"); break;
	}

	printf("  Version:                           %d", header.e_ident[EI_VERSION]);
	switch (header.e_ident[EI_VERSION]) {
		case EV_CURRENT: printf(" (current)\n"); break;
		default: printf("\n"); break;
	}

	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI]) {
		case ELFOSABI_NONE: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_ARM: printf("ARM\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
		default: printf("<unknown>\n"); break;
	}

	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

	printf("  Type:                              ");
	switch (header.e_type) {
		case ET_NONE: printf("NONE (Unknown type)\n"); break;
		case ET_REL: printf("REL (Relocatable file)\n"); break;
		case ET_EXEC: printf("EXEC (Executable file)\n"); break;
		case ET_DYN: printf("DYN (Shared object file)\n"); break;
		case ET_CORE: printf("CORE (Core file)\n"); break;
		default: printf("<unknown>\n"); break;
	}

	printf("  Entry point address:               0x%lx\n", header.e_entry);

	close(fd);
}
