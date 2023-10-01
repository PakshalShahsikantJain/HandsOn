/*
    Author : Pakshal Shshikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and copy the
              contents into another string by removing extra white spaces.
                
              Input : Marvellous        multi          OS”
              Output : Marvellous multi OS”

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"bufio"
	"os"
)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Copy String After Removing White Spaces
func StrCpyX(src *[]byte,dest *[]byte) {
	var i int = 0;
	var j int = 0;

	if ((*src == nil)&&(*dest == nil)) {
		return;
	}

	//Logic To Copy String 
	for (i != len(*src)) {
		if ((*src)[i] == ' ') {
			for (((*src)[i] == ' ')&&(i != len(*src))) {
				i++;
			}

			(*dest)[j] = ' ';
			j++;
		}

		(*dest)[j] = (*src)[i];
		j++;
		i++;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var arr []byte;
	var brr []byte;

	//Creating object of Bufio Class To Take input from user
	var bobj = bufio.NewReader(os.Stdin);
	var err error = nil;

	fmt.Println("Jay Ganesh.....");

	//Taking input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Creating Character Array of Entered String
	arr = []byte(str);
	brr = make([]byte,len(arr));

	//Call To StrCpyX Function
	StrCpyX(&arr,&brr);
	
	//Printing Copied String
	fmt.Printf("Copied String is : %s",brr);
}