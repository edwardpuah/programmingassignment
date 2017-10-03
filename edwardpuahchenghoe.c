/*-------------------------------------------------------------------
*/
/* ITS62804– Assignment #1 */
/* Principles of Programming */
/* Student Name: Edward Puah Cheng Hoe */
/* Student ID: 0333099 */
/*-------------------------------------------------------------------
*/

#include<stdio.h>

int menuDisplay();
int menuSys(int selection);

int main()
{
    int userSelection;
    userSelection = menuDisplay();
    
    while( userSelection < 1 || userSelection > 7 )
    {
        printf("\n**********************************************\n");
        printf("The number that you have entered is invalid\nPlease enter a valid number between 1-7");
        printf("\n**********************************************\n");
        userSelection = menuDisplay();
    }
    
    menuSys( userSelection );
}

int menuDisplay()
{
    int option;
    
    printf("\n╔═════════════════════════════════╗\n");
    printf("║   Fast Food Ordering System     ║\n");
    printf("╚═════════════════════════════════╝\n");
    printf("1 → Purchase\n");
    printf("2 → Edit Meal\n");
    printf("3 → Add Meal\n");
    printf("4 → Delete Meal\n");
    printf("5 → Show Available Meal\n");
    printf("6 → Show daily transaction\n");
    printf("7 → Exit\n");
    
    printf("Please select your option by entering the corresponding number: ");
    scanf("%d", &option);
    
    return option;
}

int menuSys( int selection )
{
	int totalComboTrans = 0, totalAlaCarteTrans = 0;
	double totalSales = 0, gstCollected = 0;
	
	switch( selection )
	{
		case 1:
		printf("\n************************\n");
		printf("Option not added yet");
		printf("\n************************\n");
		main();
		break;
    
		case 2:
		printf("\n************************\n");
		printf("Option not added yet");
		printf("\n************************\n");
		main();
		break;
    
		case 3:
		printf("\n************************\n");
		printf("Option not added yet");
		printf("\n************************\n");
		main();
		break;
    
		case 4:
		printf("\n************************\n");
		printf("Option not added yet");
		printf("\n************************\n");
		main();
		break;
    
		case 5:
		printf("\n************************\n");
		printf("Option not added yet");
		printf("\n************************\n");
		main();
		break;
    
		case 6:
		printf("\nTotal combo meal transaction\t: %d\n",totalComboTrans);
		printf("Total ala-carte transaction\t: %d\n", totalAlaCarteTrans);
		printf("Total sales\t\t\t: RM %.2f\n",totalSales);
		printf("GST collected\t\t\t: RM %.2f\n",gstCollected);
		main();
		break;
    
		case 7:
		printf("\nThank you\nPlease come again\n");
		break;
  }
}