/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *phone;

+ (int)dataType;

- (id)email;
- (BOOL)isValidWithError:(id*)arg1;
- (id)name;
- (id)phone;

@end
