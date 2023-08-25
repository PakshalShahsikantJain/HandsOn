/*
    Author : Pakshal Shashikant Jain
    Date : 24/08/2023
    Program : Write a program which accept string from user and copy the
              contents of that string into another string. (Implement strncpy() function)
              
              Input : "Marvellous Multi OS"
                       10
              Output : Marvellous
              
              Note : If third parameter is greater than the size of source string then
              copy whole string into destination. 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy Contents of Entered String Till Entered Size
func StrNCpyX(src *[]byte,dest *[]byte,isize int) {
	var i int = 0;

	if ((*src == nil)&&(*dest == nil)) {
		return;
	}
	
	//Logic To Copy Contents of String 
	for i != len(*src) && isize != 0 {
		(*dest)[i] = (*src)[i];
		i++;
		isize--;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var brr[]byte;
	var str string = " ";
	var isize int = 0;
	var err error = nil;

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter one String");

	//Creating object of Bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);

	//Taking Input from user
	str,err = bobj.ReadString('\n');
	if err != nil {
		return;
	}

	//Creating Character Array of Entered String 
	arr = []byte(str);
	
	fmt.Println("Enter Number Till You Want To Copy Contents of String");
	fmt.Scan(&isize);

	//Allocating Memory To Array 
	brr = make([]byte,len(arr));

	//Call To StrNCpyX Function
	StrNCpyX(&arr,&brr,isize);

	//Printing Copied String
	fmt.Printf("Copied String is : %s",brr);
}