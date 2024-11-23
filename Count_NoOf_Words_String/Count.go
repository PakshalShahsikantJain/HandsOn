/*
    Author : Pakshal Shashikant Jain
    Date : 22/09/2023
    Program : Write a program which accept string from user count number of
              words from string
              
              Input : "Marvellous Multi OS"
              Output : 3
              
              Input : "              Marvellous                  Multi           OS             Pune"
              Output : 4 
*/

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

//Function To Count Number of Words in Entered String
func WordCount(str *[]byte) int {
	var i int = 0;
	var icnt int = 1;

	//Logic To Count
	if ((*str)[i] == ' ') {
		for ((*str)[i] == ' ') {
			i++;
		}
	}

	for (i != len(*str)) {
		if ((*str)[i] == ' ') {
			for (((*str)[i] == ' ')&&(i != len(*str))) {
				i++;
			}
			icnt++;
		}

		i++;
	}

	return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iret int = 0;
	var str string = " ";
	var arr []byte;
	var err error = nil;

	//Creating object of bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if(err != nil) {
		return;
	}

	//Creating Character Array of String
	arr = []byte(str);

	//Call To WordCount function
	iret = WordCount(&arr);
	
	//Printing Count of Words
	fmt.Println("Count of Words in Entered String is : ",iret);
}