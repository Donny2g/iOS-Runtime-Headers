/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchNotificationChangesOperationResult : CKOperationResult <NSSecureCoding> {
    BOOL _moreComing;
    CKServerChangeToken *_serverChangeToken;
}

@property (nonatomic) BOOL moreComing;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)moreComing;
- (id)serverChangeToken;
- (void)setMoreComing:(BOOL)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
