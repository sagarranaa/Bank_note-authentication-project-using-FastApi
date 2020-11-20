from pydantic import BaseModel
##2. Class which describe Bank Note Measurements
class BankNote(BaseModel):
    variance:float
    skewness:float
    curtosis:float
    entropy:float