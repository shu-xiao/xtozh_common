a=[]
for line in open("ele_Eiko.txt"):
    #aa = line.split() 
    a.append(line)

b=[]
for line2 in open("Jose.txt"):
    #bb = line.split()
    b.append(line2)


aminusb=set(a)-set(b)
bminusa=set(b)-set(a)
sameevent=set(a)&set(b)

ab=list(aminusb)
ba=list(bminusa)
same=list(sameevent)

print " diffference of conv veto and pixel seed"
for jevent in range(len(ab)):
    print ab[jevent]


print " diffference of pixel seed and conv veto"
for ievent in range(len(ba)):
    print ba[ievent]


print "same of pixel seed and conv veto"




print "lenght of ab =", len(ab)
print "lenght of ba =", len(ba)
print "length of sameevent =", len(same)
