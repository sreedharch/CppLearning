Opening a File:
void open(const char *filename, ios::openmode mode);
Eg: open a file in write mode and want to truncate
ofstream outfile;
outfile.open("file.dat", ios::out | ios::trunc );
Eg: open a file for reading and writing
fstream  afile;
afile.open("file.dat", ios::out | ios::in );

Closing a File:
void close();

Read and Write:
main.cpp