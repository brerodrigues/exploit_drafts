int main() { sendfile(1, open("/flag", 0), 0, 1000); }
