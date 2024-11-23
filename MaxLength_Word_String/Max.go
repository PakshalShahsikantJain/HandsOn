/*
    Author : Pakshal Shashikant Jain
    Date : 23/09/2023
    Program : Write a program which accept string from user and return length of
              largest word.

              Input : "Marvellous Multi OS Infosystems"
              Output : 11
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import(
	"fmt"
	"bufio"
	"os"
)

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Length of Largest Word
func MaxWordLen(arr *[]byte) int {
	var icnt int = 0;
	var iMax int = 0;
	var i int = 0;

	//Logic To Find
	if (*arr == nil) {
		return -1;
	}

	for (i != len(*arr) - 2) {
		if ((*arr)[i] == ' ') {
			for (((*arr)[i] == ' ')&&(i != len(*arr))) {
				i++;
			}
			icnt = 0;
		} else {
			icnt++;
			if (icnt > iMax) {
				iMax = icnt;
			}
			i++;
		}
	}

	return iMax;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var arr []byte;
	var str string = " ";
	var iret int = 0;
	var err error = nil;

	var bobj = bufio.NewReader(os.Stdin);
	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter One String");
	str,err = bobj.ReadString('\n');

	if (err != nil) {
		return;
	}

	//Creating Character Array of Entered String
	arr = make([]byte,len(str));
	arr = []byte(str);

	//Call To MaxWordLen function
	iret = MaxWordLen(&arr);

	//Printing Length of Largest Word
	fmt.Println("Length of Larges Word is : ",iret);
}