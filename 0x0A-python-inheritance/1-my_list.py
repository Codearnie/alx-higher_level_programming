#!/usr/bin/python3

"""Defines an inherited list class of MyList."""


class MyList(list):
    """Implements sorted printing for the built-in list class."""

    def print_sorted(self):
        """Prints a list in a sorted ascending order."""
        print(sorted(self))
