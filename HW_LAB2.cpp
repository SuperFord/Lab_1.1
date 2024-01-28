#include<stdio.h>
#include<string.h>
#include <iostream>


struct node {
	
	char data[20];
	struct node *next;
	
	
};


struct node *Addnode ( struct node **walk, char data_add[] ){
	
	while ( *walk != NULL ){
		
		walk = &(*walk) -> next;		
	
	}
	
	*walk = new struct node;
	
	strcpy ((*walk) -> data,data_add);
	(*walk) -> next = NULL;
	
	return *walk;

	
	
}


struct node *swapNodeValues ( struct node *walk , char data_add1[] , char data_add2[] ){
	
	node *node1 = NULL;
	node *node2 = NULL;
    node* pre_Node1 =  NULL;
    node* pre_Node2 =  NULL;	
	
	for ( node *curr_node = walk; curr_node != NULL; curr_node = curr_node->next ) {
		
		if (strcmp( curr_node -> data,  data_add1) == 0 ){
		
			node1 = curr_node;
		
		}else if (strcmp(curr_node->data , data_add2 ) == 0) {
			
			node2 = curr_node;
			
		}
		
		
	}
	
	//swap data 
	char temp[20] ;
	strcpy(temp, node1 -> data);
	strcpy(node1->data, node2->data);
  	strcpy(node2->data, temp);
	
	return walk;
	
}




void showAll( struct node *walk );

int main(){
	
	struct node *start , *now ;
	
	start = NULL;
	
	
	now = Addnode (&start,"one"); showAll(start);
	now = Addnode (&start,"two"); showAll(start);
	now = Addnode (&start,"three"); showAll(start);
	now = Addnode (&start,"four"); showAll(start);	
	
	now = swapNodeValues(start,"one","four"); showAll(start);
	now = swapNodeValues(start,"two","four"); showAll(start);
}


void showAll( struct node *walk ) {
 while( walk != NULL ) {
  printf( "%s ", walk->data ) ;
  walk = walk->next ;
 }//end while
 printf( "\n" ) ;
}//end function
