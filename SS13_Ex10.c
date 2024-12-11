#include<stdio.h>
	void input(int arr[],int size){
     for(int i=0; i<size;i++){
		printf("phan tu thu arr[%d]=",i);	
		scanf ("%d",&arr[i]);
          		}
			
        	}
    void printfItem(int arr[], int size){
        for(int i = 0; i < size; i++ ) {
             printf("phan tu thu arr[%d] co gia tri la %d \n",i,arr[i] );	             
				}  
     		}
    void AddItem(int arr[],int index ,int size){
          int a;
		 for(int i = size; i>index;i--){
    	 	 arr[i]=arr[i-1];
    	 	  }
    	 	  printf("Hay nhap phan tu muon them");
    	 		 scanf("%d",&a);
    	 		  arr[index]=a;
    	   }    	   
    void repairItem(int arr[],int index){
         int b;
         printf("Hay nhap phan tu ban muon sua ");
         scanf("%d",&b);
         arr[index] = b;
          }
  void deleteIndex(int arr[],int index,int length){
    for(int  i = index;i<length;i++){
        arr[i]=arr[i+1];
  }
  }
  int main(){
 // khai bao mang so nguyen gom 100 phan tu
   int arr[100];
   int size ;  
   int choose;   
   int addIx;
   int RepairIt;
   int deleteIx;
  
  
    while(choose<8){
	
  	printf("MENU \n");
  	printf("1 .Nhap so luong phan tu va gia tri \n");
  	printf("2 .In ra cac phan tu trong mang dang quan li \n ");
  	printf("3 .Them phan tu vao gia tri chi dinh \n");
   	printf("4.Sua mot phan tu o vi tri chi dinh\n");
    printf("5. Xoa mot phan tu o vi tri chi dinh\n");
    printf("6. Sap xep cac phan tu\n");
    printf("7. Tim kiem phan tu\n");
    printf("8. Thoat\n");
  	printf("Moi ban nhap lua chon   ");
    scanf("%d",&choose);
     switch(choose) {
	   case 1:
	                  printf("Nhap so luong phan tu  ") ;
	                  scanf("%d",&size);
	                  input(arr,size);
					   break;
	   case 2:
				printfItem(arr,size);
				break;
		 
		case 3:
			printf("Hay nhap vi tri ban muon them vao");
		 	 scanf("%d",&addIx);
        	  AddItem(arr, addIx, size);
		 	 size++;
		   break;	 
        case 4:
       			 printf("Hay nhap vi tri ban muon sua");
       			 scanf("%d",&RepairIt);
       			   repairItem(arr , RepairIt );
        break;
        case 5:
                printf("hãy nh?p v? trí b?n mu?n xóa : ");
                scanf("%d",&deleteIx);
                deleteIndex(arr, deleteIx, size);
                size--;
            break;
           }   
               
	       
 	  } 
     return 0;
	 } 
 
 
 

