// Created file "Lib\src\certidl\certenroll_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IObjectId, 0x728ab300, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IObjectIds, 0x728ab301, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IBinaryConverter, 0x728ab302, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX500DistinguishedName, 0x728ab303, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509EnrollmentStatus, 0x728ab304, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICspAlgorithm, 0x728ab305, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICspAlgorithms, 0x728ab306, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICspInformation, 0x728ab307, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICspInformations, 0x728ab308, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICspStatus, 0x728ab309, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICspStatuses, 0x728ab30a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509PublicKey, 0x728ab30b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509PrivateKey, 0x728ab30c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509Extension, 0x728ab30d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509Extensions, 0x728ab30e, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionKeyUsage, 0x728ab30f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionEnhancedKeyUsage, 0x728ab310, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionTemplateName, 0x728ab311, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionTemplate, 0x728ab312, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IAlternativeName, 0x728ab313, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IAlternativeNames, 0x728ab314, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionAlternativeNames, 0x728ab315, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionBasicConstraints, 0x728ab316, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionSubjectKeyIdentifier, 0x728ab317, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionAuthorityKeyIdentifier, 0x728ab318, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ISmimeCapability, 0x728ab319, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ISmimeCapabilities, 0x728ab31a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionSmimeCapabilities, 0x728ab31b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IPolicyQualifier, 0x728ab31c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IPolicyQualifiers, 0x728ab31d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertificatePolicy, 0x728ab31e, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertificatePolicies, 0x728ab31f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionCertificatePolicies, 0x728ab320, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509ExtensionMSApplicationPolicies, 0x728ab321, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509Attribute, 0x728ab322, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509Attributes, 0x728ab323, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509AttributeExtensions, 0x728ab324, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509AttributeClientId, 0x728ab325, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509AttributeRenewalCertificate, 0x728ab326, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509AttributeArchiveKey, 0x728ab327, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509AttributeArchiveKeyHash, 0x728ab328, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509AttributeOSVersion, 0x728ab32a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509AttributeCspProvider, 0x728ab32b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICryptAttribute, 0x728ab32c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICryptAttributes, 0x728ab32d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertProperty, 0x728ab32e, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertProperties, 0x728ab32f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyFriendlyName, 0x728ab330, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyDescription, 0x728ab331, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyAutoEnroll, 0x728ab332, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyRequestOriginator, 0x728ab333, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertySHA1Hash, 0x728ab334, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyKeyProvInfo, 0x728ab336, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyArchived, 0x728ab337, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyBackedUp, 0x728ab338, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyEnrollment, 0x728ab339, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyRenewal, 0x728ab33a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyArchivedKeyHash, 0x728ab33b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ICertPropertyEnrollmentPolicyServer, 0x728ab34a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509SignatureInformation, 0x728ab33c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ISignerCertificate, 0x728ab33d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_ISignerCertificates, 0x728ab33e, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509NameValuePair, 0x728ab33f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509NameValuePairs, 0x728ab340, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateTemplate, 0x54244a13, 0x555a, 0x4e22, 0x89, 0x6d, 0x1b, 0x0e, 0x52, 0xf7, 0x64, 0x06);

DEFINE_GUID(IID_IX509CertificateTemplates, 0x13b79003, 0x2181, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateTemplateWritable, 0xf49466a7, 0x395a, 0x4e9e, 0xb6, 0xe7, 0x32, 0xb3, 0x31, 0x60, 0x0d, 0xc0);

DEFINE_GUID(IID_ICertificationAuthority, 0x835d1f61, 0x1e95, 0x4bc8, 0xb4, 0xd3, 0x97, 0x6c, 0x42, 0xb9, 0x68, 0xf7);

DEFINE_GUID(IID_ICertificationAuthorities, 0x13b79005, 0x2181, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509EnrollmentPolicyServer, 0x13b79026, 0x2181, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509PolicyServerUrl, 0x884e204a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509PolicyServerListManager, 0x884e204b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequest, 0x728ab341, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestPkcs10, 0x728ab342, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestPkcs10V2, 0x728ab35b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestCertificate, 0x728ab343, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestCertificate2, 0x728ab35a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestPkcs7, 0x728ab344, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestPkcs7V2, 0x728ab35c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestCmc, 0x728ab345, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509CertificateRequestCmc2, 0x728ab35d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509Enrollment, 0x728ab346, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509Enrollment2, 0x728ab350, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509EnrollmentHelper, 0x728ab351, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509EnrollmentWebClassFactory, 0x728ab349, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(IID_IX509MachineEnrollmentFactory, 0x728ab352, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(LIBID_CERTENROLLLib, 0x728ab348, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CObjectId, 0x884e2000, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CObjectIds, 0x884e2001, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CBinaryConverter, 0x884e2002, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX500DistinguishedName, 0x884e2003, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCspInformation, 0x884e2007, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCspInformations, 0x884e2008, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCspStatus, 0x884e2009, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509PublicKey, 0x884e200b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509PrivateKey, 0x884e200c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509Extension, 0x884e200d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509Extensions, 0x884e200e, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionKeyUsage, 0x884e200f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionEnhancedKeyUsage, 0x884e2010, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionTemplateName, 0x884e2011, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionTemplate, 0x884e2012, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CAlternativeName, 0x884e2013, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CAlternativeNames, 0x884e2014, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionAlternativeNames, 0x884e2015, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionBasicConstraints, 0x884e2016, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionSubjectKeyIdentifier, 0x884e2017, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionAuthorityKeyIdentifier, 0x884e2018, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CSmimeCapability, 0x884e2019, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CSmimeCapabilities, 0x884e201a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionSmimeCapabilities, 0x884e201b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CPolicyQualifier, 0x884e201c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CPolicyQualifiers, 0x884e201d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertificatePolicy, 0x884e201e, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertificatePolicies, 0x884e201f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionCertificatePolicies, 0x884e2020, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509ExtensionMSApplicationPolicies, 0x884e2021, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509Attribute, 0x884e2022, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509Attributes, 0x884e2023, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509AttributeExtensions, 0x884e2024, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509AttributeClientId, 0x884e2025, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509AttributeRenewalCertificate, 0x884e2026, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509AttributeArchiveKey, 0x884e2027, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509AttributeArchiveKeyHash, 0x884e2028, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509AttributeOSVersion, 0x884e202a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509AttributeCspProvider, 0x884e202b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCryptAttribute, 0x884e202c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCryptAttributes, 0x884e202d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertProperty, 0x884e202e, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertProperties, 0x884e202f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyFriendlyName, 0x884e2030, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyDescription, 0x884e2031, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyAutoEnroll, 0x884e2032, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyRequestOriginator, 0x884e2033, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertySHA1Hash, 0x884e2034, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyKeyProvInfo, 0x884e2036, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyArchived, 0x884e2037, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyBackedUp, 0x884e2038, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyEnrollment, 0x884e2039, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyRenewal, 0x884e203a, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyArchivedKeyHash, 0x884e203b, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CCertPropertyEnrollmentPolicyServer, 0x884e204c, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CSignerCertificate, 0x884e203d, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509NameValuePair, 0x884e203f, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509CertificateRequestPkcs10, 0x884e2042, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509CertificateRequestCertificate, 0x884e2043, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509CertificateRequestPkcs7, 0x884e2044, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509CertificateRequestCmc, 0x884e2045, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509Enrollment, 0x884e2046, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509EnrollmentWebClassFactory, 0x884e2049, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509EnrollmentHelper, 0x884e2050, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509MachineEnrollmentFactory, 0x884e2051, 0x217d, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509EnrollmentPolicyActiveDirectory, 0x91f39027, 0x217f, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509EnrollmentPolicyWebService, 0x91f39028, 0x217f, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509PolicyServerListManager, 0x91f39029, 0x217f, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509PolicyServerUrl, 0x91f3902a, 0x217f, 0x11da, 0xb2, 0xa4, 0x00, 0x0e, 0x7b, 0xbb, 0x2b, 0x09);

DEFINE_GUID(CLSID_CX509CertificateTemplateADWritable, 0x8336e323, 0x2e6a, 0x4a04, 0x93, 0x7c, 0x54, 0x8f, 0x68, 0x18, 0x39, 0xb3);

