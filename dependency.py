import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder
from xgboost import XGBClassifier
from sklearn.metrics import accuracy_score

# Load the dataset
df = pd.read_csv("churn2.csv")

# Convert 'TotalCharges' to numeric, handle errors and fill missing values
df["TotalCharges"] = pd.to_numeric(df["TotalCharges"], errors="coerce")
df["TotalCharges"] = pd.to_numeric(df["tenure"], errors="coerce")
df["TotalCharges"] = pd.to_numeric(df["MonthlyCharges"], errors="coerce")
df["TotalCharges"].fillna(0, inplace=True)
df["tenure"].fillna(0, inplace=True)
df["MonthlyCharges"].fillna(0, inplace=True)

# Convert categorical variables to numerical using one-hot encoding
categorical_cols = [
    "gender",
    "Partner",
    "Dependents",
    "PhoneService",
    "MultipleLines",
    "InternetService",
    "OnlineSecurity",
    "OnlineBackup",
    "DeviceProtection",
    "TechSupport",
    "StreamingTV",
    "StreamingMovies",
    "Contract",
    "PaperlessBilling",
    "PaymentMethod",
]

df_encoded = pd.get_dummies(df, columns=categorical_cols, drop_first=True)

# Convert 'Churn' column to binary labels
label_encoder = LabelEncoder()
df_encoded["Churn"] = label_encoder.fit_transform(df["Churn"])

# Split the dataset into features (X) and target variable (y)
X = df_encoded.drop(["customerID", "Churn"], axis=1)
y = df_encoded["Churn"]

# Split the data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

# Create XGBoost model
model = XGBClassifier()
model.fit(X_train, y_train)

# Get feature importances
feature_importances = model.feature_importances_

# Calculate percentage of importance for each feature
total_importance = sum(feature_importances)
feature_importance_percentages = [
    (feature, importance / total_importance * 100)
    for feature, importance in zip(X.columns, feature_importances)
]

# Sort feature importance percentages
feature_importance_percentages.sort(key=lambda x: x[1], reverse=True)

# Print feature importance percentages
sum1 = 0
for feature, importance_percentage in feature_importance_percentages:
    print(f"{feature}: {importance_percentage:.2f}%")
    # sum += importance_percentage
print(sum)
