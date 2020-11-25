#include <stdio.h>
#include <stdlib.h>


enum Type{ BSc, MSc=3, PhD=5 };

struct ImpactFactor {
	double highest_if;
	int erdos_num;
};

typedef struct ImpactFactor ImpactFactor;

union ExtraData {
	int bsc;
	double msc;
	ImpactFactor phd;
};

typedef union ExtraData ExtraData;

struct Student {
	int id;
	int age;
	double average;
	enum Type type;
	ExtraData extra;
};

typedef struct Student Student;


void print_student(const Student* const student) {
	printf("student id: %d, age: %d years, avg: %f ", student->id, student->age, student->average);
	switch (student->type) {
		case BSc:
			printf(" bsc, num of lectures: %d\n", student->extra.bsc);
			break;
		case MSc:
			printf(" msc, kk: %f\n", student->extra.msc);
			break;
		case PhD:
			printf(" phd, impact factor: (%f, %d)\n", student->extra.phd.highest_if, student->extra.phd.erdos_num);
			break;
		default:
			break;
	}
}

int main() {
	struct Student Geri;
	Geri.id = 1;
	Geri.average = 5.0;
	Geri.age = 29;
	Geri.type = MSc;
	printf("Geri: %d, %d, %f, %d\n\n\n\n", Geri.id, Geri.age, Geri.average, Geri.type);

	
	struct Student st;
	printf("int: %ld\n", sizeof(int));
	printf("double: %ld\n", sizeof(double));
	printf("%ld, %ld\n", sizeof(st), 2*sizeof(int) + sizeof(double));
	printf("id:  %p,\nage: %p,\navg: %p\n", &st.id, &st.age, &st.average);


	int id_arr[10];
	int age_arr[10];
	double avg_arr[10];

	// helyett ->
	struct Student student_arr[10];

	for (int i = 0; i < 10; ++i) {
		printf("%d. student id: %d, age: %d, avg: %f\n", i, id_arr[i], age_arr[i], avg_arr[i]);
		struct Student* act_s = &student_arr[i];
		act_s->id = id_arr[i];
		act_s->age = age_arr[i];
		act_s->average = avg_arr[i];
		printf("%d. student id: %d, age: %d, avg: %f\n", i, act_s->id, act_s->age, act_s->average);
	}

	Student* dyn_students = (Student*)malloc(10*sizeof(Student));
	// used it, filled it with actual data...
	{
		Student* new_st =  (Student*)malloc(20*sizeof(Student));
		for (int i = 0; i < 10; ++i) {
			new_st[i] = dyn_students[i];
		}
		free(dyn_students);
		dyn_students = new_st;
	}

	dyn_students = (Student*)realloc(dyn_students, 30*sizeof(Student));

	// int N = 0;
	// scanf("%d", &N);
	// dyn_students = (Student*)realloc(dyn_students, N * sizeof(Student));


	Student* s = &student_arr[0];
	s->id = 1;
	s->age = 24;
	s->average = 3.5;
	s->type = BSc;
	s->extra.bsc = 3;

	s = &student_arr[1];
	s->id = 2;
	s->age = 25;
	s->average = 3.8;
	s->type = MSc;
	s->extra.msc = 3.2;

       	s = &student_arr[2];
	s->id = 3;
	s->age = 30;
	s->average = 4.9;
	s->type = PhD;
	s->extra.phd.highest_if = 3.4;
	s->extra.phd.erdos_num = 5;

	for (int i = 0; i < 3; ++i) {
		print_student(&student_arr[i]);
	}

	free(dyn_students);
	return 0;
}
