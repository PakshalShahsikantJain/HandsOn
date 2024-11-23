/*
    Author : Pakshal Shashikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and replace each
              occurrence of first character of each word into capital case.
    
              Input : "marvellous infosystems by Piyush khairnar"
              Output : "Marvellous Infosystems By Piyush Khairnar"
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"
import "os"
import "bufio"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert First Letter of Each Word Present in Entered String
func Convert(str *[]byte) {
	var i int = 0;

	if (((*str)[i] >= 'a')&&((*str)[i] <= 'z')) {
		(*str)[i] = (*str)[i] - 32;
	}

	for (i != len(*str)) {
		if ((*str)[i] == ' ') {
			for ((*str)[i] == ' ')&&(i != len(*str)) {
				i++;
			}

			if(((*str)[i] >= 'a')&&((*str)[i] <= 'z')) {
				(*str)[i] = (*str)[i] - 32;
			}
		}
		i++;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var err error = nil;

	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay ganesh....");

	//Taking Input from user
	fmt.Println("Enter one String");
	str,err = bobj.ReadString('\n');
	
	if err != nil {
		return;
	}

	arr = []byte(str);

	//Call To Convert Function 
	Convert(&arr);

	//Printing Modified String
	fmt.Printf("Modified String is : %s",arr);
}