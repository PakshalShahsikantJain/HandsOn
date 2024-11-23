/*
    Author : Pakshal Shashikant Jain 
    Date : 14/09/2023
    Program : Write a program which 2 strings from user and check whether
              contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Infosystems"
              Output : TRUE 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Characteristics of Class
package main
import "fmt"
import "os"
import "bufio"

//Function To Compare Two Strings
func StrCmpX(src *[]byte,dest *[]byte) bool {
	var i int = 0;
	var j int = 0;

	if((*src == nil)&&(*dest == nil)) {
		return false;
	}

	//Logic To Compare
	for ((i != len(*src) - 1)&&(j != len(*dest) - 1)) {
		if ((*src)[i] != (*dest)[j]) {
			break;
		}
		i++;
		j++;
	}
	if ((*src)[i] != (*dest)[j]) {
		return false;
	} else {
		return true;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var bret bool = false;
	var str string = " ";
	var str2 string = " ";
	var err error = nil;
	var arr []byte;
	var brr []byte;

	//Creating object of bufio Class To Take Input from user
	var bobj = bufio.NewReader(os.Stdin);
	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter First String");
	str,err = bobj.ReadString('\n');

	fmt.Println("Enter Second String");
	str2,err = bobj.ReadString('\n');

	//Allocating Memory To Array
	arr = make([]byte,len(str));
	brr = make([]byte,len(str2));

	if (err != nil) {
		return;
	}

	//Creating Character array of Entered String
	arr = []byte(str);
	brr = []byte(str2);

	//Call To StrCmpX Function
	bret = StrCmpX(&arr,&brr);

	//Handeling Conditions if bret is True
	if (bret == true) {
		fmt.Println("Both Strings are Equal");
	} else {
		fmt.Println("Both String are Not Equal");
	}
}