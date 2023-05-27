 printf("%-12s %-20s %-20s %-15s %-10s %-10s %-20s %-15s %-10s\n",
       "Roll number", "Name", "Phone number", "City", "Marks", "Gender", "Colony", "City", "Pincode");

for (i = 0; i < n; i++)
{
    printf("%-12d %-20s %-20lld %-15s %-10d %-10c %-20s %-15s %-10ld\n",
           BCA_R[i].roll, BCA_R[i].name, BCA_R[i].phone_number, BCA_R[i].A.city,
           BCA_R[i].marks, BCA_R[i].gender, BCA_R[i].A.col, BCA_R[i].A.city, BCA_R[i].A.pin);
}