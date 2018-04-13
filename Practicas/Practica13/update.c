#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

int i;

typedef struct s{
	char name[20];
	char lastName[20];
	unsigned int id;
	unsigned char cal;
} Student;

int main(){
	char *fileName = "studentDb.data";
	int fd = open(filename, 0_RDWR);
	int id;
	Student *pAvanzada = (Student *)mmap(
		NULL,
		5 * sizeof(Student),
		PROT_READ | PROT_WRITE,
		MAP_FILE | MAP_PRIVATE,
		fd,
		0
		);
	for(i =0; i<4; i++) {
		printf("Provide id, new name \n");
		scanf("%d %s", &id, name);
		strcpy(pAvanzada[1].name, "Pedro");
		msync(pAvanzada,5 * sizeof(Student), MS_SYNC);
	}
	munmap(pAvanzada,5 * sizeof(Student));
	close(fd);
	return 0;
}