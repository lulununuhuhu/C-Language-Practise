  #include "stdlib.h"
  #include "stdio.h"
  
  typedef struct Date
  {
      int year;
      int month;
      int day;
  }DATE,*PDATE;//将Date结构体分别以DATE和指针*PDATE表示

  int main(void)
  {
      struct Date *date;
      date = (PDATE)malloc(sizeof(DATE));//等价于date = (struct Date*)malloc(sizeof(struct Date));
      if (date == NULL)
      {
          printf("变量内存分配失败");
          exit(1);
      }
      date->day = 5;
      date->month = 9;
      date->year = 2019;
      printf("今天是%d年%d月%d日.\n",date->year,date->month,date->day);
      free(date);
      system("pause");    
  }
  