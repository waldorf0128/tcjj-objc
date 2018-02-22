#import <Foundation/Foundation.h>

/**
* 同城家教 API
* 同城家教 接口文档, V1.0
*
* OpenAPI spec version: 1.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


/**
 * A key for deserialization ErrorDomain
 */
extern NSString *const SWGDeserializationErrorDomainKey;

/**
 * Code for deserialization type mismatch error
 */
extern NSInteger const SWGTypeMismatchErrorCode;

/**
 * Code for deserialization empty value error
 */
extern NSInteger const SWGEmptyValueOccurredErrorCode;

/**
 * Error code for unknown response
 */
extern NSInteger const SWGUnknownResponseObjectErrorCode;

@protocol SWGResponseDeserializer <NSObject>

/**
 * Deserializes the given data to Objective-C object.
 *
 * @param data The data will be deserialized.
 * @param className The type of objective-c object.
 * @param error The error
 */
- (id) deserialize:(id) data class:(NSString *) className error:(NSError**)error;

@end

@interface SWGResponseDeserializer : NSObject <SWGResponseDeserializer>

/**
 *  If an null value occurs in dictionary or array if set to YES whole response will be invalid else will be ignored
 *  @default NO
 */
@property (nonatomic, assign) BOOL treatNullAsError;

@end
