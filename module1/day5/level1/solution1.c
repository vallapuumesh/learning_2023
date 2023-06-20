/* Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.*/

#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float Volume(struct Box* ptrBox) {
    return ptrBox->length * ptrBox->width * ptrBox->height;
}

float SurfaceArea(struct Box* ptrBox) {
    return 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height);
}

int main() {
    struct Box Box1 = { 10, 20, 30};
    struct Box* ptrBox = &Box1;

    
    float volume1 = (*ptrBox).length * (*ptrBox).width * (*ptrBox).height;
    float surfaceArea1 = 2 * ((*ptrBox).length * (*ptrBox).width + (*ptrBox).length * (*ptrBox).height + (*ptrBox).width * (*ptrBox).height);

    
    float volume2 = ptrBox->length * ptrBox->width * ptrBox->height;
    float surfaceArea2 = 2 * (ptrBox->length * ptrBox->width + ptrBox->length * ptrBox->height + ptrBox->width * ptrBox->height);
     
    
    float volume3 = Volume(ptrBox);
    float surfaceArea3 = SurfaceArea(ptrBox);
    
    printf("Using asterisk (*) and dot (.) operator:\n");
    printf("Volume: %.2f\n", volume1);
    printf("Surface Area: %.2f\n\n", surfaceArea1);

    printf("Using arrow (->) operator:\n");
    printf("Volume of the box: %.2f\n", volume2);
    printf("Surface area of the box: %.2f\n\n", surfaceArea2);
    
    printf("Using separate functions:\n");
    printf("Volume: %.2f\n", volume3);
    printf("Surface Area: %.2f\n", surfaceArea3);
   
    return 0;
}