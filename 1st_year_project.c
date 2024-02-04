
#include <stdio.h>
#include <string.h>


void space(int i) 
{for(int j=1;j<=2;j++){ 

printf("  ");
}}

void a(int i)
{for(int j=1;j<=5;j++){
if(i==1||i==4||j==1||j==5)
printf("**"); 
else 
printf("  ");
}
space(i);
}
void b(int i) 
{for(int j=1;j<=5;j++){
if(i==1||(i==3&&j!=1)||i==5||j==2||j==5)
printf("**"); 
else 
printf("  ");  
}
space(i);
}
void c(int i) 
{for(int j=1;j<=5;j++)
{if(j==1||i==1||i==5) 
printf("**"); 
else 
printf("  "); 

}
space(i);
}
void d(int i) 
{for(int j=1;j<=5;j++)
{if(j==2||j==5||i==1||i==5)
printf("**");
else 
printf("  "); 
} 
space(i); 
}
void e(int i)
{for(int j=1;j<=5;j++)
{if(i==1||i==3||i==5||j==1)
printf("**");
else 
printf("  ");
}
space(i); 
}
void f(int i) 
{for(int j=1;j<=5;j++)
{if(j==1||i==1||(i==3&&j!=4&&j!=5)) 
printf("**") ; 
else 
printf("  ");
}
space(i); 
}
void g(int i) 
{for(int j=1;j<=5;j++)
{if(i==1||i==5||j==1||(j==5&&i>2)||(i==3&&j>3))
printf("**"); 
else 
printf("  ");
}
space(i); 
}
void h(int i) 
{for(int j=1;j<=5;j++)
{if(i==3||j==1||j==5)
printf("**");
else 
printf("  ");
}
space(i); 
}
void ii(int i)
{for(int j=1;j<=5;j++)
{if(i==1||i==5||j==3)
printf("**"); 
else 
printf("  ");
}
space(i); 
}
void j(int i)
{for(int j=1;j<=5;j++)
{if(i==1||j==3||(i==5&&j<4)||(j==1&&i>3)) 
printf("**");
else 
printf("  ");
}
space(i); 
}
void k(int i) 
{for(int j=1;j<=5;j++)
{if(j==1||i+j==5||(i==4&&j==3)||(i==5&&j==4))
printf("**");
else 
printf("  ");
    
}
space(i); 
}

void l(int i) 
{for(int j=1;j<=5;j++)
{if(i==5||j==1)
printf("**"); 
else 
printf("  ");
}
space(i); 
}

void m(int i) 
{for(int j=1;j<=5;j++)
{if(j==1||j==5||(i<4&&(i==j||i+j==6)))
printf("**"); 
else 
printf("  ");
}
space(i); 
}

void n(int i)
{for(int j=1;j<=5;j++)
{if(j==1||j==5||i==j) 
printf("**");
else 
printf("  ");
}
space(i); 
}

void o(int i) 
{for(int j=1;j<=5;j++)
{if(i==1||i==5||j==1||j==5)
printf("**");
else 
printf("  ");
}
space(i); 
}

void p(int i) 
{for(int j=1;j<=5;j++)
{if(j==1||i==1||(i<4&&j==5)||i==3) 
printf("**");
else 
printf("  ");

}
space(i); 
}

void q(int i)
{for(int j=1;j<=5;j++)
{if(((j==4||i==1||(i<4&&j==1)||i==4)&&j!=5)||(j==5&&i==5))
printf("**");
else 
printf("  ");

}
space(i); 
}
void r(int i)
{for(int j=1;j<=5;j++)
{if(j==1||i+j==5||(i==4&&j==3)||(i==5&&j==4)||(i==1&&j!=5))
printf("**");
else 
printf("  ");
} 
space(i);
}
void s(int i)
{for(int j=1;j<=5;j++)
 {if(i==1||i==3||i==5||(j==1&&i<=3)||(j==5&&i>=3))
 printf("**"); 
 else 
 printf("  ");
 }
 space(i);
}
void t(int i)
{for(int j=1;j<=5;j++)
{if(i==1||j==3)
printf("**"); 
else 
printf("  "); 
} 
space(i);
}
void u(int i)
{for(int j=1;j<=5;j++)
{if(j==1||j==5||i==5)
printf("**");
else 
printf("  "); 
} 
space(i); 
}
void v(int i)
{for(int j=1;j<=5;j++)
 {if(j==5||i==j)
 printf("**"); 
 else 
 printf("  "); 
 } 
 space(i); 
}
void w(int i)
{for(int j=1;j<=5;j++)
 {if(j==1||j==5||((i==j||i+j==6)&&i>=3))
 printf("**"); 
 else 
 printf("  ");
 }
 space(i); 
 
}
void x(int i)
{for(int j=1;j<=5;j++)
{if(i+j==6||i==j)
printf("**"); 
else 
printf("  "); 
} 
space(i); 
}
void y(int i)
{for(int j=1;j<=5;j++)
{if((i<=3&&(j==i||j+i==6))||(j==3&&i>=3))
printf("**"); 
else 
printf("  "); 
} 
space(i); 
}
void z(int i)
{for(int j=1;j<=5;j++)
{if(i==1||i==5||i+j==6)
printf("**"); 
else 
printf("  "); 
} 
space(i); 
}

int main()
{ 
  printf("created by deepanshu malviya.\n");
  for(int cc=1;cc<=5;cc++){
    char name[]={}; 
  printf("Write something  \n");
  scanf("%s",name);
 
  long len=strlen(name);
  for(int i=1;i<=5;i++)
  {for(int ch=0;ch<len;ch++)
  {if(name[ch]=='a')
  a(i); 
  else if(name[ch]=='b')
  b(i);
  else if(name[ch]=='c')
  c(i);
  else if(name[ch]=='d')
  d(i);
  else if(name[ch]=='e')
  e(i);
  else if(name[ch]=='f')
  f(i);
  else if(name[ch]=='g')
  g(i);
  else if(name[ch]=='h')
  h(i);
  else if(name[ch]=='i')
  ii(i);
  else if(name[ch]=='j')
  j(i);
  else if(name[ch]=='k')
  k(i);
  else if(name[ch]=='l')
  l(i);
  else if(name[ch]=='m')
  m(i);
  else if(name[ch]=='n')
  n(i);
  else if(name[ch]=='o')
  o(i);
  else if(name[ch]=='p')
  p(i);
   else if(name[ch]=='q')
  q(i);
  else if(name[ch]=='r')
  r(i);
  else if(name[ch]=='s')
  s(i);
  else if(name[ch]=='t')
  t(i);
  else if(name[ch]=='u')
  u(i);
  else if(name[ch]=='v')
  v(i);
  else if(name[ch]=='w')
  w(i);
  else if(name[ch]=='x')
  x(i);
  else if(name[ch]=='y')
  y(i);
  else if(name[ch]=='z')
  z(i);
  }
  printf("\n");
  }}
    return 0;
} 
