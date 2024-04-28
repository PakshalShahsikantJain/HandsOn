def Pattern(ino) :
    if(ino == 0) :
        return;
    else :
        print("*",end = "\t");
        ino = ino - 1;
        Pattern(ino);

def main() :
    ino = 0;

    print("Jay Ganesh....");
    print("Enter One Number to print that number of '*'");
    ino = int(input());
    
    Pattern(ino);

if __name__ == "__main__" :
    main();