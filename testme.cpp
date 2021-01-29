 #include<graphics.h>
 main(int x,int y)
 {
   int gd=0,gm;
   initgraph(&gd,&gm,"");
   circle(100,80,20);
   getch();
   closegraph();
}
