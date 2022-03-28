#include<bits/stdc++.h>		//pattern printing  
using namespace std;		//outer loop for rows	//inner loop for coloumn
int main()
{	
														/*    
																  *
																  *  *
																  *	 *   *		
																					*/
	for(int row=1;row<6;row++)
	{														
		for(int col=1;col<row;col++)
			cout<<"*"<<"  ";
	cout<<"\n";
	}
	cout<<"\n";
															/*    
																  1
																  2  3
																  4	 5   6		
																					*/
	
	int a=1;
	for(int row=1;row<6;row++)
		{	for(int col=1;col<row;col++)
				cout<<a++<<"  ";
		cout<<"\n";	
		}
		cout<<endl;
	
	
															/*    
																  #		#	   #
																  #		#	   #
																  #		#   	#		
																					*/
																					
	for(int row=1;row<6;row++)
		{for(int col=1;col<6;col++)
			cout<<"#"<<"  ";
		cout<<"\n";
		}
	cout<<"\n";
															/*    
																  	4	5	6
																    2   3
																  	1	
																					*/
	for(int row=6;row>0;row--)
		{	for(int col=row;col>0;col--)
				cout<<"*";
		cout<<"\n";		
		}
		cout<<"\n";
	
															/*    
																  	6	5	4
																    5	4
																    4
																  		
																					*/
	
	for(int row=6;row>0;row--)
	{	for(int col=row;col>0;col--)
			cout<<col<<" ";
		cout<<endl;
	}
	cout<<endl;
									/*    
																  	6	5	4
																    5	4
																    4
																  		
																					*/
	for(int row=1;row<6;row++)
	{	for(int col=row;col<5;col++)
			cout<<"  ";
			
		for(int  col=0;col<row;col++)
		cout<<" *";//space before * has to be synced with the  space in above loop
    
	cout<<"\n";
   }
   cout<<"\n\n\n\n\n";
   
   									/*    
																  	* * * *
																  	  * * *		
																		* *	
																		  *			*/
	for(int row=0;row<6;row++)
	{	for(int col=0;col<row;col++)
			cout<<"  ";
			
		for(int  col=row;col<6;col++)
		cout<<" *";//space before * has to be synced with the  space in above loop
    
	cout<<"\n";
   }
    cout<<"\n\n\n\n\n";
   
   									/*    
																  			*
																  	  	*	*	*		
																	*	*	*	*	*	
																*	*	*	*	*	*	*			*/
	for(int row=0;row<6;row++)
		{
		
		for(int col=row;col<5;col++)
			cout<<"  ";	       
		for(int  col=0;col<row;col++)
		cout<<" *";	
		for(int col=1;col<row;col++)
		cout<<" *";    
	cout<<"\n";
  		 }
   
   
   cout<<"\n\n\n\n";
   
   		/*    
																*	*	*	*	*	*	*  			
																  	*  	*	*	*	*	
																		*	*	*	*	
																			*						*/
   	for(int row=0;row<6;row++)
	{	for(int col=1;col<row;col++)
			cout<<"  ";
		for(int col=row;col<5;col++)
			cout<<" *";	
		for(int  col=row;col<6;col++)
		cout<<" *";//space before * has to be synced with the  space in above loop
    
	cout<<"\n";
   }		/*    
																  			*
																  	  	*	*	*		
																	*	*	*	*	*	
																*	*	*	*	*	*	*
																	*	*	*	*	*	
																		*	*	*		
																			*	
																							*/
   
   for(int row=0;row<5;row++)			//for pointed edge in side of diamond
		{
		
		for(int col=row;col<6;col++)
			cout<<"  ";	       
		for(int  col=0;col<row;col++)
		cout<<" *";	
		for(int col=1;col<row;col++)
		cout<<" *";    
	cout<<"\n";
  		 }
   for(int row=0;row<5;row++)
	{	for(int col=1;col<row;col++)
			cout<<"  ";
		for(int col=row;col<5;col++)
			cout<<" *";	
		for(int  col=row;col<6;col++)
		cout<<" *";//space before * has to be synced with the  space in above loop
    
	cout<<"\n";
   }
	return 0;
}   