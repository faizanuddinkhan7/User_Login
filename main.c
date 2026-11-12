#include <stdio.h>
#include <string.h>

void password(char * username, char * pas1, char * pas2, size_t size){
  printf("\nEnter your username: \n");
  fgets(username, size, stdin);

  printf("\nEnter your password: \n");
  fgets(pas1, size, stdin);

  printf("\nVerify your password: \n");
  fgets(pas2, size, stdin);
}

int main(void) {
  char username[50];
  char pas1[50];
  char pas2[50];

  password(username, pas1, pas2, sizeof(username));

  if (sizeof(pas1) >= 50) {
    fprintf(stderr, "Password is too long\n");
  } else if (strcmp(pas1, pas2) == 0) {
    fprintf(stdout,"\n===== Login Successful =====\n");
  } else {
    fprintf(stderr, "\n===== Login Failed =====\n");
  }

  return 0;
}
