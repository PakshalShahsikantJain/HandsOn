/*
    Author : Pakshal Shashikant Jain
    Date : 15/09/2023
    Program : Write a program which 2 strings from user and check whether first
              N contents of two strings are equal or not. (Implement strcmp()
              function).

              Input : "Marvellous Infosystems"
                      "Marvellous Logic Building"
                      10
              Output : TRUE
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"
import "os"
import "bufio"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Compare First N Contents of Entered String
func StrNCmpX(src *[]byte,dest *[]byte,icnt int) bool {
	var i int = 0;
	var j int = 0;

	if ((*src == nil)&&(*dest == nil)) {
		return false;
	}

	for (((i != len(*src)) && (j != len(*dest))) && icnt != 0) {
		if ((*src)[i] != (*dest)[j]) {
			break;
		}
		i++;
		j++;
		icnt--;
	} 

	if ((*src)[i] != (*dest)[j]) {
		return false;
	} else {
		return true;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var bret bool = false;
	var Str string = " ";
	var Str2 string = " ";
	var err error = nil;
	var icnt int = 0;
	var arr []byte;
	var brr []byte;

	//Creating object of New Reader Class
	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter First String");
	Str,err = bobj.ReadString('\n');	

	fmt.Println("Enter First String");
	Str2,err = bobj.ReadString('\n');

	if err != nil {
		return;
	}

	fmt.Println("Enter One Size");
	fmt.Scan(&icnt);

	//Allocating Memory To Array
	arr = make([]byte,50);
	brr = make([]byte,30);

	//Creating Character Array of Entered String
	arr = []byte(Str);
	brr = []byte(Str2);

	//Call To StrNCmpX Class
	bret = StrNCmpX(&arr,&brr,icnt);

	if (bret == true) {
		fmt.Println("First N Contents of Both String Are Equal");
	} else {
		fmt.Println("First N Contetnts of Both String Are Not Equal")
	}
}