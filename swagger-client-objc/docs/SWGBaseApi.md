# SWGBaseApi

All URIs are relative to *http://andrew.tcjj.net/Api/Main*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getSystemCurrency**](SWGBaseApi.md#getsystemcurrency) | **POST** /getSystemCurrency | 获取系统的金币名称


# **getSystemCurrency**
```objc
-(NSURLSessionTask*) getSystemCurrencyWithGetSystemCurrency: (SWGGetSystemCurrencyRequest*) getSystemCurrency
        completionHandler: (void (^)(SWGServerResponse* output, NSError* error)) handler;
```

获取系统的金币名称

APP获取系统货币名称

### Example 
```objc

SWGGetSystemCurrencyRequest* getSystemCurrency = [[SWGGetSystemCurrencyRequest alloc] init]; // APP获取系统货币名称

SWGBaseApi*apiInstance = [[SWGBaseApi alloc] init];

// 获取系统的金币名称
[apiInstance getSystemCurrencyWithGetSystemCurrency:getSystemCurrency
          completionHandler: ^(SWGServerResponse* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling SWGBaseApi->getSystemCurrency: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **getSystemCurrency** | [**SWGGetSystemCurrencyRequest***](SWGGetSystemCurrencyRequest.md)| APP获取系统货币名称 | 

### Return type

[**SWGServerResponse***](SWGServerResponse.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: multipart/form-data
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

