#include <stdio.h>

int main(){
    int PageNum, PageSize, PagePos, PageTable[10] = {0}, LogicAdr, PhysicAdr, MemSize, offset;
 
    printf(" Enter the memory size: ");
    scanf("%d", &MemSize); //I don't know wtf is this used for
 
    printf(" Enter the pages size: ");
    scanf("%d", &PageSize);
 
    printf(" Enter no of pages for a process: ");
    scanf("%d", &PageNum);
 
    printf(" Enter pagetable for a poces:\n ");
    printf(" log page | phy page\n");
    for ( int i = 0; i < PageNum; ++i ){
        printf("%8d   |   ", i);
        scanf("%d", PageTable + i);
    }
 
    printf("\n Enter logical address:");
    scanf("%d", &LogicAdr);
 
    offset = LogicAdr % PageSize;
 
    PagePos = LogicAdr / PageSize;
 
    PhysicAdr = PageTable[PagePos] * PageSize + offset;
 
    printf(" the physical address is %d\n", PhysicAdr);
    
    return 0;
}
