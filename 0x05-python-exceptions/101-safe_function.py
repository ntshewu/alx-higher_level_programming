#!/usr/bin/python3

import sys


def safe_function(fct, *args):
    """Executes a func safely.

    Args:
        fct: The func to execute.
        args: Args for func.

    Returns:
        If an error occurs - None.
        Otherwise - the result of the call to func
    """
    try:
        result = fct(*args)
        return (result)
    except:
        print("Exception: {}".format(sys.exc_info()[1]), file=sys.stderr)
        return (None)
