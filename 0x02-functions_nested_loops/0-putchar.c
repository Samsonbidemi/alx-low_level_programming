#!/bin/bash
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Sucess)
 */

int main(void)
{
	char *_ = "_putchar\n";

	while (*_)
	{
		_putchar(*_);
		_++;
	}
	return (0);
}
