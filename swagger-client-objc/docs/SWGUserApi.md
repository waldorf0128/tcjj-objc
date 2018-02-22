# SWGUserApi

All URIs are relative to *http://andrew.tcjj.net/Api/Main*

Method | HTTP request | Description
------------- | ------------- | -------------
[**callRegister**](SWGUserApi.md#callregister) | **POST** /register | 用户注册操作
[**changePassword**](SWGUserApi.md#changepassword) | **POST** /changePassword | 修改密码
[**checkVarcode**](SWGUserApi.md#checkvarcode) | **POST** /checkVarcode | 验证码校验
[**getPhoneVarcode**](SWGUserApi.md#getphonevarcode) | **POST** /getPhoneVarcode | 获取验证码
[**login**](SWGUserApi.md#login) | **POST** /login | 用户登录操作
[**retrievePassword**](SWGUserApi.md#retrievepassword) | **POST** /retrievePassword | 重置密码


# **callRegister**
```objc
-(NSURLSessionTask*) callRegisterWithRegister: (SWGRegisterRequest*) _register
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```

用户注册操作

注册

### Example 
```objc

SWGRegisterRequest* _register = [[SWGRegisterRequest alloc] init]; // 注册

SWGUserApi*apiInstance = [[SWGUserApi alloc] init];

// 用户注册操作
[apiInstance callRegisterWithRegister:_register
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUserApi->callRegister: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_register** | [**SWGRegisterRequest***](SWGRegisterRequest.md)| 注册 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **changePassword**
```objc
-(NSURLSessionTask*) changePasswordWithChangePassword: (SWGChangePasswordRequest*) changePassword
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```

修改密码

修改密码

### Example 
```objc

SWGChangePasswordRequest* changePassword = [[SWGChangePasswordRequest alloc] init]; // 修改密码

SWGUserApi*apiInstance = [[SWGUserApi alloc] init];

// 修改密码
[apiInstance changePasswordWithChangePassword:changePassword
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUserApi->changePassword: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **changePassword** | [**SWGChangePasswordRequest***](SWGChangePasswordRequest.md)| 修改密码 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **checkVarcode**
```objc
-(NSURLSessionTask*) checkVarcodeWithCheckVarcode: (SWGCheckVarcodeRequest*) checkVarcode
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```

验证码校验

判断用户输入的验证码是否正确

### Example 
```objc

SWGCheckVarcodeRequest* checkVarcode = [[SWGCheckVarcodeRequest alloc] init]; // 判断用户输入的验证码是否正确

SWGUserApi*apiInstance = [[SWGUserApi alloc] init];

// 验证码校验
[apiInstance checkVarcodeWithCheckVarcode:checkVarcode
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUserApi->checkVarcode: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **checkVarcode** | [**SWGCheckVarcodeRequest***](SWGCheckVarcodeRequest.md)| 判断用户输入的验证码是否正确 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getPhoneVarcode**
```objc
-(NSURLSessionTask*) getPhoneVarcodeWithGetPhoneVarcode: (SWGGetPhoneVarcodeRequest*) getPhoneVarcode
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```

获取验证码

获取验证码

### Example 
```objc

SWGGetPhoneVarcodeRequest* getPhoneVarcode = [[SWGGetPhoneVarcodeRequest alloc] init]; // 获取验证码

SWGUserApi*apiInstance = [[SWGUserApi alloc] init];

// 获取验证码
[apiInstance getPhoneVarcodeWithGetPhoneVarcode:getPhoneVarcode
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUserApi->getPhoneVarcode: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **getPhoneVarcode** | [**SWGGetPhoneVarcodeRequest***](SWGGetPhoneVarcodeRequest.md)| 获取验证码 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **login**
```objc
-(NSURLSessionTask*) loginWithLogin: (SWGLoginRequest*) login
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```

用户登录操作

登录

### Example 
```objc

SWGLoginRequest* login = [[SWGLoginRequest alloc] init]; // 登录

SWGUserApi*apiInstance = [[SWGUserApi alloc] init];

// 用户登录操作
[apiInstance loginWithLogin:login
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUserApi->login: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **login** | [**SWGLoginRequest***](SWGLoginRequest.md)| 登录 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **retrievePassword**
```objc
-(NSURLSessionTask*) retrievePasswordWithRetrievePassword: (SWGRetrievePasswordRequest*) retrievePassword
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```

重置密码

忘记密码，进行重置

### Example 
```objc

SWGRetrievePasswordRequest* retrievePassword = [[SWGRetrievePasswordRequest alloc] init]; // 重置密码

SWGUserApi*apiInstance = [[SWGUserApi alloc] init];

// 重置密码
[apiInstance retrievePasswordWithRetrievePassword:retrievePassword
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGUserApi->retrievePassword: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **retrievePassword** | [**SWGRetrievePasswordRequest***](SWGRetrievePasswordRequest.md)| 重置密码 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

