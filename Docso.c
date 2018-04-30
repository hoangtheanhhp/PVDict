#include <stdio.h>

#include <math.h>
void tcso( unsigned long int n,unsigned long int x ,int dem );              //Ham goi ten chu so
void thdvi( unsigned long int n,unsigned long int x,int dem );           //Ham goi ten hang don vi
int scso( int n );               //Ham dem so chu so
int Luythua10(int n);
FILE *f;          
int main()
{  
    f = fopen("100.txt","w");
    unsigned long int n,y;
    int dem;
    //fprintf(f,"Nhap n (den 2 ty): ");
    int i;
    for(i=1;i<=100000;i++) {
      n=i;
      fprintf(f,"%d ",n);
    dem=scso(n);            
     while(n>0){
       y=n/Luythua10(dem-1);          //phan tich n vi du 5678 thi y=5
       tcso(n,y,dem);                   // goi ten y.Vd y=5 thi in ra la nam
       n=n - y*Luythua10(dem-1);       //bat dau chuong trinh n=5678 thuc hien cau lenh n=678;
       if(n==0){                        //vi du 400000 khi thuc hien cau lenh n=0 dem =5 thi thu hien in ra bon tram nghin
       dem=dem-1;
       thdvi(n,y,dem);
       }
       else{                            //vi du khi 567 thi thuc hien in ra nam ,thuc hien in ra tram roi khi ay dem moi bang dem-1
       thdvi(n,y,dem);
       dem=dem-1;    
      }
    }
    fprintf(f,"\n");
    }  
   // getch();
    close(f);
    return 0;
}
 
int Luythua10(int n)
{
    int lt = 1;
    int i;
    for(i = 0; i < n; i++)
        lt*= 10;
    return lt;        
}
 
void tcso(unsigned long int n,unsigned long int x,int dem ){          //Ham goi ten chu so          
     if(n>0&&x==1 &&(dem==2||dem==5||dem==8)){
        fprintf(f,"");
      }
     else if(x==0&&n>=1&&n<10000&&dem==4){
        fprintf(f,"");
     }
     else if(x==0&&n>=1&&n<10000&&dem==5){
          fprintf(f,"");
     }
     
     else if(x==0&&n>=1&&n<10000000&&dem==7){
       fprintf(f,"");
     }
     else if(x==0&&n>=1&&n<10000000&&dem==8){
          fprintf(f,"");
     }
     
     else if(x==0&&n>=1&&n<100000000&&dem==8){
        fprintf(f,"linh ");
     }
     else if(x==0&&n>=1&&n<10000&&dem==4){
          fprintf(f,"");
     }
     else if(x==0&&n>=1&&n<100000&&dem==5){
       fprintf(f,"linh ");
     }
     else if(x==0&&n>=1&&n<100&&dem==2){
          fprintf(f,"linh ");
     }
     else if(x==0&&n>=1&&n<10000000&&dem==7){
          fprintf(f,"");
     }
     
     else
    switch(x){
        case 0:
          fprintf(f, "khong " );
          break;
        case 1:
          fprintf(f, "mot " );
          break;
        case 2:
          fprintf(f, "hai " );
          break;
        case 3:
          fprintf(f, "ba " );
          break;
        case 4:
          fprintf(f, "bon " );
          break;
        case 5:
          fprintf(f, "nam " );
          break;
        case 6:
          fprintf(f, "sau " );
          break;
        case 7:
          fprintf(f, "bay " );
          break;
        case 8:
          fprintf(f, "tam " );
          break;
        case 9:
          fprintf(f, "chin " );
          break;
        default:
          fprintf(f,"");
          break;
     }
}  
int scso( int n ){        //Ham dem so chu so
     int dem;
     dem=0;
     while( n>0 ){
       n=n/10;
       dem=dem+1;
       if(n==0){
             break;
       }
     }
     return dem;
}
void thdvi( unsigned long int n,unsigned long int x,int dem ){      //Ham goi ten hang don vi        
      if(x==0&&n>=1&&n<100000&&dem==5){
         fprintf(f,"");
      }
      else if(x==0&&n>=1&&n<100&&dem==2){
         fprintf(f,"");
      }
      else if(x==0&&n>=1&&n<100000&&dem==5){
         fprintf(f,"");
      }
      else if(x==0&&n>=1&&n<100000000&&dem==8){
        fprintf(f,"");
      }
      else if(x==0&&n>1&&n<100000000&&dem==8){
        fprintf(f,"");
      }
     
      else if (n==0){
            if(dem==9){
              fprintf(f,"ty");
            }
            else if(dem==8){
              fprintf(f,"tram trieu");
            }
            else if(dem==7){
              fprintf(f,"chuc trieu");
            }
            else if(dem==6){
              fprintf(f,"trieu");
            }      
            else if(dem==5){
              fprintf(f,"tram nghin");
            }
            else if(dem== 4){
              fprintf(f,"chuc nghin");
            }
            else if(dem==3){
              fprintf(f,"nghin");
            }
            else if(dem==2){
              fprintf(f,"tram");
            }
            else if(dem==1){
              fprintf(f,"muoi");
            }  
            else{
                fprintf(f,"");
            }
    }          
               
    else{
    switch ( dem ){
      case 10:
        fprintf(f,"ty ");
        break;
      case 9:
        fprintf(f,"tram ");
        break;
      case 8:
        fprintf(f,"muoi ");
        break;
      case 7:
        fprintf(f, "trieu ");
        break;    
      case 6:  
        fprintf(f, "tram ");
        break;
      case 5:
        fprintf(f, "muoi ");
        break;
      case 4:
        fprintf(f, "nghin " );
        break;
      case 3:
        fprintf(f, "tram " );
        break;
      case 2:
        fprintf(f, "muoi " );
        break;
      default :
        fprintf(f,"");
        break;
    }
  }  
}