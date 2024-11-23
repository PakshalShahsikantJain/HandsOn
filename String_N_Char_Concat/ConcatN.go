/*
    Author : Pakshal Shashikant Jain 
    Date : 13/09/2023
    Program : Write a program which accepts 2 strings from user and concat N
              characters of second string after first string.Value of N should be
              accepted from user. (Implement strncat() function).

              Note : If third parameter is greater than the size of second string then
              concat whole string after first string.

              Input : "Marvellous Infosystems"
                      "Logic Building"
                       5
              Output : "Marvellous Infosystems Logic"
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
package main
import "fmt"
import "bufio"
import "os"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Concatenate Two Strings
func StrNCatX(src *[]byte,dest *[]byte,sret *[]byte,icnt int) {
	var i int = 0;
	var j int = 0;

	//Logic To Concatenate
	for i != len(*src) {
		(*sret)[i] = (*src)[i];
		i++;	
	}

	(*sret)[i] = ' ';
	i++;

	for ((j != len(*dest) - 1)&&(icnt != 0)) {
		(*sret)[i] = (*dest)[j];
		i++;
		j++;
		icnt--;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var str string = " ";
	var str2 string = " ";
	var arr []byte;
	var brr []byte;
	var crr []byte;
	var icnt int = 0;
	var err error = nil;
	var bobj = bufio.NewReader(os.Stdin);

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter First Stirng");
	str,err = bobj.ReadString('\n');

	fmt.Println("Enter Second Stirng");
	str2,err = bobj.ReadString('\n');

	fmt.Println("Enter size");
	fmt.Scan(&icnt);

	if err != nil {
		return;
	}

	//Allocating Memory To Array
	arr = make([]byte,len(str));
	brr = make([]byte,len(str2));
	crr = make([]byte,50);

	arr = []byte(str);
	brr = []byte(str2);

	//Call To StrNCatX Function
	StrNCatX(&arr,&brr,&crr,icnt);

	//Printing Concatenated String
	fmt.Printf("Concatenates String is : %s",crr);
}