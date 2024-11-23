/*
    Author : Pakshal Jain 
    Date : 28/08/2023
    Program : Write a program which accept string from user and copy that
              characters of that string into another string by removing all white
              spaces.

              Input : "Marvel lous Pyth on"
              Output : "MarvellousPython"
*/

//Required Libraries
package main
import "fmt"
import "bufio"
import "os"

//Function To Copy String After Removing White Spaces
func StrCpyX(src *[]byte,dest *[]byte) {
	var i int = 0;

	if ((*src == nil)&&(*dest == nil)) {
		return;
	}

	//Logic To Copy String 
	for i != len(*src) {
		if ((*src)[i] != ' ') {
			(*dest)[i] = (*src)[i];
		}
		i++;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var brr []byte;
	var str string;
	var err error = nil;

	var bobj = bufio.NewReader(os.Stdin);
	fmt.Println("Jay Ganesh......");

	//Taking Input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	//Allocating Memory and Creating Character array of Entered String
	arr = []byte(str);
	brr = make([]byte,len(str));

	//Call To StrCpyX Function
	StrCpyX(&arr,&brr);

	//Printing Copied String 
	fmt.Printf("String Copied After Removing White Spaces is : %s",brr);
}