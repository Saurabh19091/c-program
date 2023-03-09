#include<stdio.h>
void main()
{
	int menu();
	int create(int []);
	int insert_front(int , int [10],int );
	int insert_rear(int , int [10],int );
	int insert_position(int , int [10],int,int );
	int delete_front(int , int [10]);
	int delete_rear(int , int [10] );
	int delete_element(int , int [10],int );
	void search(int, int [],int);
	void update(int, int [], int, int);
	void traverse_forward(int , int []);
	void traverse_backward(int , int []);
	int ch,n, arr[10],y=0,p=0;
	ch=menu();
	while(ch >0 && ch<12)
	{
		switch(ch)
		{
		case 1:
			printf("\n\n To create\n\n");
			n=create(arr);
			ch=menu();
			break;
		case 2:
			printf("\n\n To insert front \n\n");
			printf(" enter element for front insertion : ");
			scanf("%d",&y);
			n=insert_front(n,arr,y);
			ch=menu();
			break;
		case 3:
			printf("\n\n To insert rear \n\n");
			printf(" enter element for rear insertion : ");
			scanf("%d",&y);
			n=insert_rear(n,arr,y);
			ch=menu();
			break;
		case 4:
			printf("\n\n To insert position \n\n");
			printf(" enter element poistion & value for insertion : ");
			scanf("%d%d",&p,&y);
			n=insert_position(n,arr,p,y);
			ch=menu();
			break;
		case 5:
			printf("\n\n To delete front \n\n");
			n=delete_front(n,arr);
			ch=menu();
			break;
		case 6:
			printf("\n\n To delete rear \n\n");
			n=delete_rear(n,arr);
			ch=menu();
			break;
		case 7:
			printf("\n\n To delete element \n\n");
			printf(" enter element for deletion : ");
			scanf("%d",&y);
			n=delete_element(n,arr,y);
			ch=menu();
			break;
		case 8:
			printf("\n\n To search\n\n");
			printf(" enter element for searching : ");
			scanf("%d",&y);
			search(n,arr,y);
			ch=menu();
			break;
		case 9:
			printf("\n\n To update\n\n");
			printf(" enter element posion &  value for updating : ");
			scanf("%d%d",&p,&y);
			update(n,arr,p,y);
			ch=menu();
			break;
		case 10:
			printf("\n\n To traverse forward\n\n");
			traverse_forward(n,arr);
			ch=menu();
			break;
		case 11:
			printf("\n\n To traverse backward\n\n");
			traverse_backward(n,arr);
			ch=menu();
			break;
		}
	};
	return;
}
int menu()
{
	int ch;
    int n;
	printf("\n1. Create\n");
	printf("2. Insert-Front\n");
	printf("3. Insert-Rear\n");
	printf("4. Insert-Position\n");
	printf("5. Delete-Front\n");
	printf("6. Delete-Rear\n");
	printf("7. Delete-Position\n");
	printf("8. Search\n");
	printf("9. Upadate\n");
	printf("10.Traverse-Forward\n");
	printf("11.Traverse-Backward\n");
	printf("12.Exit\n\n");
	printf(" Enter your choice : ");
	scanf("%d",&ch);
	return(ch);
}
int create(int x[10])
{
  
	//return(n);
}
int insert_front(int n, int a[10],int y)
{
 
	return(n);
}
int insert_rear(int n, int x[10],int y )
{
    
	return(n);
}
int insert_position(int n , int a[10],int p,int y )
{
    

	return(n);
}
int delete_front(int n, int a[10])
{
    

	return(n);
}
int delete_rear(int n , int x[10] )
{
 
	return(n);
}
int delete_element(int n , int x[10],int y )
{
    
	return(n);
}
void search(int n, int x[10],int y)
{
	
}
void update(int n, int x[10], int p, int y)
{



	return;
}
void traverse_forward(int n, int x[10])
{
 
	return;
}
void traverse_backward(int n, int x[10])
{
   

	return;
}