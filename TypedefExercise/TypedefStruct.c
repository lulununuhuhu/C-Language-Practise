  #include "stdlib.h"
  #include "stdio.h"
  
  typedef struct Date
  {
      int year;
      int month;
      int day;
  }DATE,*PDATE;//��Date�ṹ��ֱ���DATE��ָ��*PDATE��ʾ

  int main(void)
  {
      struct Date *date;
      date = (PDATE)malloc(sizeof(DATE));//�ȼ���date = (struct Date*)malloc(sizeof(struct Date));
      if (date == NULL)
      {
          printf("�����ڴ����ʧ��");
          exit(1);
      }
      date->day = 5;
      date->month = 9;
      date->year = 2019;
      printf("������%d��%d��%d��.\n",date->year,date->month,date->day);
      free(date);
      system("pause");    
  }
  