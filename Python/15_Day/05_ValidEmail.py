def fun(s):
    # return True if s is a valid email, else return False
    try:
        un, url = s.split('@')
        web,ext = url.split('.')
    except ValueError:
        return False
    
    if un.replace('-','').replace('_','').isalnum() is False:
        return False
    
    elif web.isalnum() is False:
        return False
    
    elif len(ext) > 3:
        return False
    
    else :
        return True
