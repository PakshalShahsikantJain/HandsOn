/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept division of student from user and depends on the division
              display exam timing. There are 4 divisions in school as A,B,C,D. Exam
              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
              (Application should be case insensitive)
            
              Input : C
              Output : Your exam at 9.20 AM
            
              Input : d
              Output : Your exam at 10.30 AM
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func Division(ch byte ) {
	if((ch >= 'a')&&(ch <= 'z')) {
		ch = ch - 32;
	}

	switch (ch) {
		case 'A' : {
			fmt.Println("Your Exam is at 7 AM"); 
			break;
		} 
		case 'B' : {
			fmt.Println("Your Exam is At 8:30 AM");
			break;
		} 
		case 'C' : {
			fmt.Println("Your Exam is At 9:20 AM");
			break;
		}
		case 'D' : {
			fmt.Println("Your Exam is At 10:30 AM");
			break;
		} 
		default : {
			fmt.Println("Invalid Division");
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var ch byte = ' ';

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter Your Division");
	fmt.Scanf("%c",&ch);

	//Call To Division Function
	Division(ch);
}