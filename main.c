/*For what ever usage this product is used for, the creator is not responsible.*/
/*This is but a simple program made by MauWen, and do not even bother ridiculing it... he will not listen*/
/*I hate repeating myself but, for any purposes this program is used for, the creator, MauWen is not responsible*/
/*and will shoulder no responsibility, or blame for whatever happens. This applies to the three parties involved,*/
/*the accused, the creator, and the accuser, and also to the other parties, if ever there are.*/
/* you are free to edit this program to your will, and also remove this. as long as the rules given are still applied and still applicable.*/
/*If ever there are questions please contact MauWen [You know who he is (>_<) *win wink*] */

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void key_press_enter(void)
{
	char rel;
	printf("\n\t\tEnter to continue...");
	rel = getchar();
}

int main(void)
{

	int flag = 1;
	int cash = 0;
	int need;
	int response_again;
	int quantity;
	int flag_2[100] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int total_order = 0;
	int stock[50];
	int a, b, c, d, e, f;
	int response;
	int variable_scapegoat;
	int contain;
	int stock_pay[50];
	int total_of_all;
	int limiter = 1;
	int bill = 0;
	int customerinput;
	int change = 0;
	int price[10];

	char product1[1024];
	char product2[1024];
	char product3[1024];
	char product4[1024];
	char product5[1024];
	char productprice1[1024];
	char productprice2[1024];
	char productprice3[1024];
	char productprice4[1024];
	char productprice5[1024];
	char out_of_stock[1024] = {'\"', 'o', 'u', 't', ' ', 'o', 'f', ' ','i', 't', 'e', 'm', 's', '.'};
	char restaurant[1024];
	char get_product;
	char customer[1024];
	char ans;

	printf("Enter shop name.\n----> ");
	gets(restaurant);


	printf("Enter products 1-5.\n");
	
		printf("----> ");
		gets(product1);
		printf("----> ");
		gets(product2);
		printf("----> ");
		gets(product3);
		printf("----> ");
		gets(product4);
		printf("----> ");
		gets(product5);


	for (f = 0; f <= strlen(product1); f++){
		productprice1[f] = product1[f];
	}
	for (f = 0; f <= strlen(product2); f++){
		productprice2[f] = product2[f];
	}
	for (f = 0; f <= strlen(product3); f++){
		productprice3[f] = product3[f];
	}
	for (f = 0; f <= strlen(product4); f++){
		productprice4[f] = product4[f];
	}
	for (f = 0; f <= strlen(product5); f++){
		productprice5[f] = product5[f];
	}



	printf("\nYou have entered:\n\t> %s\n\t> %s\n\t> %s\n\t> %s\n\t> %s", product1, product2, product3, product4, product5);
	
	printf("\n\nEnter stock respectively\n");
	for (a = 1; a <= 5; a++){
		printf("----> ");
		scanf("%d", &stock[a]);
	}	
	printf("\n\t\t%s\n\n\tproduct\t\t\tStock\n\n\t%s\t\t%5d\n\t%s\t\t%5d\n\t%s\t\t%5d\n\t%s\t\t%5d\n\t%s\t\t%5d",restaurant,product1, stock[1], product2, stock[2], product3, stock[3], product4, stock[4], product5, stock[5]);

	printf("\n\nEnter price respectively\n");
	for (b = 1; b <= 5; b++){
		printf("----> ");
		scanf("%d", &price[b]);
	}	
	printf("\n\t\t%s\n\n\tproduct\t\t\tStock\t\tPrice\n\n\t%s\t\t%d\t%d\n\t%s\t\t%d\t%d\n\t%s\t\t%d\t%d\n\t%s\t\t%d\t%d\n\t%s\t\t%d\t%d",restaurant,product1, stock[1], price[1], product2, stock[2], price[2],product3, stock[3], price[3], product4, stock[4],price[4], product5, stock[5], price[5]);



	  while(((variable_scapegoat = getchar()) !='\n') && (variable_scapegoat != EOF));

repeat:

	do
	{

	buy:

	if(stock[1] == 0 && stock[2] == 0 && stock[3] == 0 && stock[4] == 0&& stock[5] == 0 && total_order != 0){
		goto loop2;
	}

		printf("\n\n\n\n\n\n\n\n\n\n\n");

		printf("\t\t\t%15s\n", restaurant);


		printf("\n\n\n");
		printf("\t[1] [$ %d - %d] - %s\n", price[1], stock[1], product1);
		printf("\t[2] [$ %d - %d] - %s\n", price[2], stock[2], product2);
		printf("\t[3] [$ %d - %d] - %s\n", price[3], stock[3], product3);
		printf("\t[4] [$ %d - %d] - %s\n", price[4], stock[4], product4);
		printf("\t[5] [$ %d - %d] - %s\n", price[5], stock[5], product5);

		
		printf("\n\t\tEnter '7' to end ordering, '8' to see bill.\n\n");
		printf("\n\t----> ");
		get_product = getche();
		customerinput = get_product - '0'; 
		

		switch(customerinput){
			case 7:
				printf("\t\t\tBILL: %d", bill);
				printf("\n\tPress enter to continue.\n");
				break;
			case 8: 
				printf("\t\t\tBILL: %d", bill);
				key_press_enter();
				flag = 0;
			break;
			case 1: 
			total_order++;
				if (stock[1] == 0){
					printf("\tSorry, but we're out of products.");
					key_press_enter();
					goto buy;

				}
				printf("\n\tYou chose %s. \n\tHow many %s(s) do you want? ", product1,product1);
				scanf("%d", &quantity);
				if (quantity > stock[1]){

					printf("\tSorry but we only have %d left.\n\tWould you like to order all? [1] YES [2] NO\n\t----> ", stock[1]);
					scanf("%d", &response); 
						
					if (response == 1){
						quantity = stock[1];
						stock_pay[1] = stock[1];
						stock[1] = 0;
						bill = bill + (price[1] * quantity);
						flag_2[1]++;

						
						
						 
						for (c = 0; c <= strlen(product1); c++ ){
								product1[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product1[d] = out_of_stock[d];
								
						}


					} else if (response == 2){
						printf("Ok.\n");
						key_press_enter();
					} else {
						printf("\t\tInvalid Input.");
					}
				
						
				} else if (quantity <= stock[1] && quantity > 0){
					if (quantity == stock[1]){
						
						 
						for (c = 0; c <= strlen(product1); c++ ){
								product1[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product1[d] = out_of_stock[d];
								
						}

					}

					stock[1] = stock[1] - quantity;
					stock_pay[1] = quantity;
					bill = bill + (price[1] * quantity);
					flag_2[1]++;
				} else {
					printf("\t\tInvalid input.");
					key_press_enter();
				}
				quantity = 0;
				response = 0;
			break;
			case 2:
			total_order++;
				if (stock[2] == 0){
					printf("\tSorry, but we're out of products.");
					key_press_enter();
					goto buy;

				}
				printf("\n\tYou chose %s. \n\tHow many %s(s) do you want? ", product2,product2);
				scanf("%d", &quantity);
				if (quantity > stock[2]){

					printf("\tSorry but we only have %d left.\n\tWould you like to order all? [1] YES [2] NO\n\t----> ", stock[2]);
					scanf("%d", &response); 
						
					if (response == 1){
						quantity = stock[2];
						stock_pay[2] = stock[2];
						flag_2[2]++;
						stock[2] = 0;
						bill = bill + (price[2] * quantity);
						
						
						 
						for (c = 0; c <= strlen(product2); c++ ){
								product2[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product2[d] = out_of_stock[d];
								
						}


					} else if (response == 2){
						printf("Ok.\n");
						key_press_enter();
					} else {
						printf("\t\tInvalid Input.");
					}
				
						
				} else if (quantity <= stock[2] && quantity > 0){
					if (quantity == stock[2]){
						
						 
						for (c = 0; c <= strlen(product2); c++ ){
								product2[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product2[d] = out_of_stock[d];
								
						}

					}
					stock_pay[2] = quantity;
					stock[2] = stock[2] - quantity;
					bill = bill + (price[2] * quantity);
					flag_2[2]++;
				} else {
					printf("\t\tInvalid input.");
					key_press_enter();
				}
				quantity = 0;
				response = 0;
			break;
			case 3: 
				total_order++;
				if (stock[3] == 0){
					printf("\tSorry, but we're out of products.");
					key_press_enter();
					goto buy;

				}
				printf("\n\tYou chose %s. \n\tHow many %s(s) do you want? ", product3,product3);
				scanf("%d", &quantity);
				if (quantity > stock[3]){

					printf("\tSorry but we only have %d left.\n\tWould you like to order all? [1] YES [2] NO\n\t----> ", stock[3]);
					scanf("%d", &response); 
					
					if (response == 1){
						quantity = stock[3];
						stock_pay[3] = stock[3];
						flag_2[3]++;
						stock[3] = 0;
						bill = bill + (price[3] * quantity);
						
						
						 
						for (c = 0; c <= strlen(product3); c++ ){
								product3[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product3[d] = out_of_stock[d];
								
						}


					} else if (response == 2){
						printf("Ok.\n");
						key_press_enter();
					} else {
						printf("\t\tInvalid Input.");
					}
				
						
				} else if (quantity <= stock[3] && quantity > 0){
					if (quantity == stock[3]){
						
						 
						for (c = 0; c <= strlen(product3); c++ ){
								product3[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product3[d] = out_of_stock[d];
								
						}

					}
					flag_2[3]++;
					stock[3] = quantity;
					stock[3] = stock[3] - quantity;
					bill = bill + (price[3] * quantity);
				} else {
					printf("\t\tInvalid input.");
					key_press_enter();
				}
				quantity = 0;
				response = 0;
			break;
			case 4: 
				total_order++;
				if (stock[4] == 0){
					printf("\tSorry, but we're out of products.");
					key_press_enter();
					goto buy;

				}
				printf("\n\tYou chose %s. \n\tHow many %s(s) do you want? ", product4,product4);
				scanf("%d", &quantity);
				if (quantity > stock[4]){

					printf("\tSorry but we only have %d left.\n\tWould you like to order all? [1] YES [2] NO\n\t----> ", stock[4]);
					scanf("%d", &response);
					
					if (response == 1){
						stock_pay[4] = stock[4]; 
						quantity = stock[4];
						stock[4] = 0;
						bill = bill + (price[4] * quantity);
						flag_2[4]++;
						
						
						
						for (c = 0; c <= strlen(product4); c++ ){
								product4[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product4[d] = out_of_stock[d];
								
						}


					} else if (response == 2){
						printf("Ok.\n");
						key_press_enter();
					} else {
						printf("\t\tInvalid Input.");
					}
				
					
				} else if (quantity <= stock[4] && quantity > 0){
					if (quantity == stock[4]){
						
						
						for (c = 0; c <= strlen(product4); c++ ){
								product4[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product4[d] = out_of_stock[d];
								
						}

					}
					flag_2[4]++;
					stock_pay[4] =quantity;
					stock[4] = stock[4] - quantity;
					bill = bill + (price[4] * quantity);
				} else {
					printf("\t\tInvalid input.");
					key_press_enter();
				}
				quantity = 0;
				response = 0;
			break;
			case 5:
			total_order++;
				if (stock[5] == 0){
					printf("\tSorry, but we're out of products.");
					key_press_enter();
					goto buy;

				}
				printf("\n\tYou chose %s. \n\tHow many %s(s) do you want? ", product5,product5);
				scanf("%d", &quantity);
				if (quantity > stock[5]){

					printf("\tSorry but we only have %d left.\n\tWould you like to order all? [1] YES [2] NO\n\t----> ", stock[5]);
					scanf("%d", &response); 
						
					if (response == 1){
						stock_pay[5] = stock[5];
						quantity = stock[5];
						flag_2[5]++;
						stock[5] = 0;
						bill = bill + (price[5] * quantity);
						
						
						 
						for (c = 0; c <= strlen(product5); c++ ){
								product5[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product5[d] = out_of_stock[d];
								
						}


					} else if (response == 2){
						printf("Ok.\n");
						key_press_enter();
					} else {
						printf("\t\tInvalid Input.");
					}
				
						
				} else if (quantity <= stock[5] && quantity > 0){
					if (quantity == stock[5]){
						
						 
						for (c = 0; c <= strlen(product5); c++ ){
								product5[c] = '\0'; 
								
						}
						for (d =0; d <= strlen(out_of_stock); d++){
								product5[d] = out_of_stock[d];
								
						}

					}
					stock_pay[5] = quantity;
					stock[5] = stock[5] - quantity;
					flag_2[5]++;
					bill = bill + (price[5] * quantity);
				} else {
					printf("\t\tInvalid input.");
					key_press_enter();
				}
				quantity = 0;
				response = 0;
			break;
			default:
				printf("\n\t\tInvalid Input.");


		} 
	} while(flag == 1);



	contain = bill;

	loop2:
	printf("\n\tEnter cash. $ ");
	scanf("%d", &cash);

	if(bill <= cash) { 
		printf("\tPress enter to continue.");
			  while(((variable_scapegoat = getchar()) !='\n') && (variable_scapegoat != EOF));
			ans = getchar();

		printf("\n\tPlease enter your name.\n\t");
		gets(customer);

		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("\t\t\t%14s\n", restaurant);
		printf("\t++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
		printf("\tCustomer: %s\n\n", customer);
			if (flag_2[1] != 0){
				total_of_all = stock_pay[1] * price[1];
				printf("\t[1] %s - %d----------------$ %d\n",productprice1, stock_pay[1],  price[1]);
			}

			if (flag_2[2] != 0){
				total_of_all = stock_pay[2] * price[2];
				printf("\t[2] %s - %d----------------$ %d\n",productprice2, stock_pay[2],  price[2]);
			}

			if (flag_2[3] != 0){
				total_of_all = stock_pay[3] * price[3];
				printf("\t[3] %s - %d----------------$ %d\n",productprice3, stock_pay[3],  price[3]);
			}

			if (flag_2[4] != 0){
				total_of_all = stock_pay[4] * price[4];
				printf("\t[4] %s - %d----------------$ %d\n",productprice4, stock_pay[4],  price[4]);
			}

			if (flag_2[5] != 0){
				total_of_all = stock_pay[5] * price[5];
				printf("\t[5] %s - %d----------------$ %d\n",productprice5, stock_pay[5],  price[5]);
			}

		printf("\tTotal....... $ %d\n", bill);
		printf("\tCash: %d\n", cash);
		change = cash - bill;
		printf("\tChange: %d\n", change);
		printf("\n\tTotal Times Customer Bought: %d", total_order);
		printf("\n\tManager: Sigmund Freud.\n");
		printf("\tCashier: Christian Grey");
		printf("\n\tBagger: Sun Tzu");

		key_press_enter();
		loopbegin:
		printf("\n\n\tOrder Again? [1] YES [2] NO? ");
		scanf("%d", &response_again);
		 if (response_again == 1)
		 {
		 	goto repeat;
		 } else if (response_again == 2)
		 {
		 	return 0;
		 	limiter = 0;
		 	exit(0);
		 } 
		 else 
		 {
		 	printf("\t\tInvalid input.");
			key_press_enter();
			goto loopbegin;
		 }
			
	} 
	else if (cash < bill)
	{

		need = bill - cash;

		printf("\n\tCash is not enough.\n\tYou need $ %d more.\n", need);
		goto loop2;

	}
	if(limiter == 1)
	{
	printf("\tInvalid input.");

		key_press_enter();

		goto loop2;
	}

	return 0;
}
