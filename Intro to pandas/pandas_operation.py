##### Pandas Data Structures #####
##### Create a DataFrame from List
import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    columns = ['student_id', 'age']
    df = pd.DataFrame(student_data, columns = columns)
    return df
##### Data Inspection #####
##### Get the Size of a DataFrame
import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    df = pd.DataFrame(players)
    return [len(df.index), len(df.columns)]


##### Display the First Three Rows
import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(employees)
    return df.head(3)

##### Data Selecting #####
##### Select Data
import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(students)
    df2 = df[df['student_id'] == 101]
    result = pd.DataFrame(df2, columns = ['name', 'age'])
    return (result)
    

##### Create a New Column
import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(employees)
    df = df.assign(bonus = lambda x: (x['salary'] * 2))
    return df

##### Data Cleaning #####
##### Drop Duplicate Rows
import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(customers)
    result = df.drop_duplicates(subset=['email'],keep='first')
    return result

##### Drop Missing Data
import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(students)
    result = df.dropna(subset=['name'])
    return result
