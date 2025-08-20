CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = divisible_by_digit_sum
SOURCE = divisible_by_digit_sum.c

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)

test: $(TARGET)
	@echo "Testing the program..."
	@echo "Test case 1: interval [1, 20]"
	@echo "1\n20" | ./$(TARGET)
	@echo "\nTest case 2: interval [10, 30]"
	@echo "10\n30" | ./$(TARGET)

.PHONY: all clean test