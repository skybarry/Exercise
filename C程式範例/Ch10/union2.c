#include <stdio.h>

enum {FLASE=0,TRUE=1};

typedef struct  {
   enum tag_field {female,male} sex;
   union {
	int children;
	int beard;
  }u;
}sex_type;

typedef struct  {
     char name[10];
     int age;
     float salary;
      sex_type sex_info;
}human_being ;

int main()

{


    human_being person1,person2;

    person1.sex_info.sex=male;
    person1.sex_info.u.beard=TRUE;

    printf("person1.sex_info.u.beard=%d\n",person1.sex_info.u.beard);
    printf("person1.sex_info.u.children=%d\n",person1.sex_info.u.children);
    person2.sex_info.sex=female;
    person2.sex_info.u.children=TRUE;

    printf("person2.sex_info.u.beard=%d\n",person2.sex_info.u.beard);
    printf("person2.sex_info.u.children=%d\n",person2.sex_info.u.children);


    getchar();
    return 0;
}
