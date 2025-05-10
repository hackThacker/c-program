#include <stdio.h>

int main() {

// Ethical Hacker Profile Data
char hackerName[] = "HackThacker";
char location[] = "All over the internet";
char specialization[] = "web and Network Penetration Testing";
char currentProject[] = "Red Team web penetration";
char toolsUsed[] = "Nmap, Metasploit, Burp Suite,Rtwebpen";
int experienceYears = 5;
float hourlyRate = 85.50;
char certification[] = "OSCP";

// Print Ethical Hacker Profile
printf("Hacker Name: %s\n", hackerName);
printf("Location: %s\n", location);
printf("Specialization: %s\n", specialization);
printf("Current Project: %s\n", currentProject);
printf("Tools Used: %s\n", toolsUsed);
printf("Experience (years): %d\n", experienceYears);
printf("Hourly Rate: $%.2f\n", hourlyRate);
printf("Certification: %s\n", certification);

return 0;
}
