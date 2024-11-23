/*
    Author : Pakshal Shashikant Jain 
    Date : 27/08/2023
    Program : Write a program which 2 strings from user and concat second string
              after first string. (Implement strcat() function).

              Input : "Marvellous"
                      "Logic"

              Output : "Marvellous Logic" 
*/

//Required Libraries
package main
import "fmt"

//Function To Concatenate Two String
func StrCatX(str string,str2 string) string {
	
	str = str +" "+ str2;
	
	return str;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var str string = " ";
	var str2 string = " ";
	var iret string = " ";

	//Taking Input from user
	fmt.Println("Enter One String");
	fmt.Scanln(&str);

	fmt.Println("Enter Second String");
	fmt.Scanln(&str2);

	//Calll To StrCatX Function
	iret = StrCatX(str,str2);

	//Printing Concatenated String
	fmt.Println("Concatenated String is : ",iret);
}