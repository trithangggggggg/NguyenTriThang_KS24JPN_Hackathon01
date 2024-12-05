#include<stdio.h>
int main(){
	int arr[100];
	int rows, cols, choice;
	int size = 0;
	
	do{
		printf("    MENU  \n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In gia tri cac phan tu \n");
		printf("3. Dem so luong cac so hoan hao\n");	
		printf("4. Tim gia tri nho thu 2 trong mang\n");	
		printf("5. Them mot phan tu vao vi tri dau tien\n");	
		printf("6. Xoa mot phan tu \n");	
		printf("7. Sap xep mang theo thu tu giam dan\n");	
		printf("8. Tim kiem phan tu trong mang\n");	
		printf("9. Sap xep va hien thi so le dung truoc chan dung sau\n");	
		printf("10. Dao nguoc va hien thi thu tu cua cac phan tu\n");
		printf("11. Thoat\n");
		printf("Ban chon: \n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: { 
                printf("Nhap so phan tu: ");
                scanf("%d", &size);
                if (size > 100 || size <= 0) {
                    printf("So phan tu khong hop le.\n");
                    size = 0;
                } else {
                    printf("Nhap gia tri cac phan tu:\n");
                    for (int i = 0; i < size; i++) {
                        printf("Phan tu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            }
			case 2: {
                if (size == 0) {
                    printf("Mang hien tai rong.\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            }
			case 5: {
                if (size >= 100) {
                    printf("Mang da day.\n");
                } else {
                    int value;
                    printf("Nhap gia tri can them vao dau mang: ");
                    scanf("%d", &value);
                    for (int i = size; i > 0; i--) {
                    	arr[i] = arr[i - 1]; 
					}
                    arr[0] = value;
                    printf("Da them %d vao mang.\n", value);
                }
                break;
            }
            case 6: {
                if (size == 0) {
                    printf("Mang hien tai rong.\n");
                } else {
                    int index;
                    printf("Nhap vi tri can xoa (0-%d): ", size - 1);
                    scanf("%d", &index);
                    if (index < 0 || index >= size) {
                        printf("Vi tri khong hop le.\n");
                    } else {
                        for (int i = index; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Da xoa phan tu tai vi tri %d.\n", index);
                    }
                }
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
                if (size == 0) {
                    printf("Mang hien tai rong.\n");
                } else {
                    int value, found = 0;
                    printf("Nhap gia tri can tim: ");
                    scanf("%d", &value);
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == value) {
                            printf("Gia tri %d o vi tri %d.\n", value, i);
                            found = 1;
                        }
                    }
                    if (!found) {
                        printf("Khong tim thay gia tri %d trong mang.\n", value);
                    }
                }		
				break;
			}
			case 9: {
				
				break;
			}
			case 10:{
			for (int i = 0; i < size; i++) {
			printf("Phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
			}
			for (int i = 0; i < size / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
			}
			printf("Mang sau khi dao nguoc:\n");
			for (int i = 0; i < size; i++) {
			printf("arr[%d] = %d - %s\n", i, arr[i], (arr[i] % 2 == 0) ? "chan" : "le");
			}	
				break;
			} 
			case 11:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n"); 
		}	

	} while (choice != 11);
	 
	return 0; 
}
