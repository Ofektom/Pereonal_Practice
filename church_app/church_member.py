#!/usr/bin/python3

class ChurchMember:
    """ A class of all members of the church with their sub-classes """
    def __init__(self, name, unit, age, assembly):
        """ Object initializarion method"""
        self.name = name
        self.unit = unit
        self.age = age
        self.assembly = assembly

    def mention(self):
        """ describes a member by name, unit and assembly """
        return "{} is a {} of {} assembly".format(self.name, self.unit, self.assembly)

class Pastor(ChurchMember):
    """ Unique pastor attributes """
    def __init__(self, name, unit, age, assembly, rank, qualification, posting_date):
        ChurchMember.__init__(sef, name, unit, age, assembly)
        self.rank = rank
        self.qualification = qualification
        self. posting_date = posting_date
