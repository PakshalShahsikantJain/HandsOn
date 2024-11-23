/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Author : Pakshal Shashikant Jain
//  Date : 09/11/2024
//  Program : Program to check given strings are Anagram or not
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Function name: ChkAngaram
    Parameters: char *arr(First String),char *brr(Second String)
    Return value: boolean value (TRUE/FALSE)
    Purpose: To Check given string is anagram or not
*/
function ChkAnagram(str:string,str2:string) : boolean
{
    var arr: string[] = [];
    var brr: string[] = [];
    var i : number = 0;
    var j : number = 0;
    var icnt : number = 0;

    arr = Array.from(str);
    brr = Array.from(str2);

    // console.log(arr);
    // console.log(brr);
    for(i = 0;i < arr.length;i++) 
    {
        icnt = 0;
        for(j = 0;j < brr.length;j++)
        {
            if(arr[i] == brr[j]) 
            {
                icnt++;
            }
        }

        if(icnt < 1) 
        {
            break;
        }
    }

    if(icnt < 1) 
    {
        return false;
    }
    else 
    {
        return true;
    }
}

//entry point function
function main() 
{
    var str:string = "car";
    var str2:string = "rac";
    var bret:boolean = false;

    console.log("Jay Ganesh...");

    //Call to ChkAnagram function
    bret = ChkAnagram(str,str2);

    if(bret == true) 
    {
        console.log("Entered Strings are anagram string");
    }
    else 
    {
        console.log("Entered Strings are not anagram string");
    }
}

//call to main function
main();